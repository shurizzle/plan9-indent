</$objtype/mkfile

VERSION=2.2.13

HFILES=\
	config.h\
	libintl.h\
	indent-$VERSION/src/args.h\
	indent-$VERSION/src/backup.h\
	indent-$VERSION/src/code_io.h\
	indent-$VERSION/src/comments.h\
	indent-$VERSION/src/globs.h\
	indent-$VERSION/src/handletoken.h\
	indent-$VERSION/src/indent.h\
	indent-$VERSION/src/lexi.h\
	indent-$VERSION/src/output.h\
	indent-$VERSION/src/parse.h\
	indent-$VERSION/src/sys.h\
	indent-$VERSION/src/utils.h\

OFILES=\
	args.$O\
	backup.$O\
	code_io.$O\
	comments.$O\
	globs.$O\
	handletoken.$O\
	indent.$O\
	lexi.$O\
	output.$O\
	parse.$O\
	utils.$O\

default:V: all

all:V: $O.indent

indent-$VERSION:
	test -d indent-$VERSION || \
		@{hget https://ftp.gnu.org/gnu/indent/indent-$VERSION.tar.gz | \
			gunzip -c | \
			tar x} || \
		@{
			s=$status
			rm -rf indent-$VERSION || status=''
			exit $s
		}

indent-$VERSION/%:Q: indent-$VERSION
	test -e indent-$VERSION/$stem

%.$O: $HFILES indent-$VERSION/src/%.c
	pcc -c -I. -I./indent-$VERSION/src '-DHAVE_CONFIG_H=1' \
		'-D_PLAN9_SOURCE=1' '-D_BSD_EXTENSION=1' \
		'-D_REENTRANT_SOURCE=1' '-D_POSIX_SOURCE=1' \
		-o $stem.$O indent-$VERSION/src/$stem.c

$O.indent: $OFILES
	pcc -o $O.indent $OFILES

/$objtype/bin/indent: $O.indent
	cp $prereq $target

install-bin:V: /$objtype/bin/indent

/sys/man/1/indent: indent-$VERSION/man/indent.1
	sed 's@\$HOME/@$home/lib/@g' $prereq > $target

install-man:V: /sys/man/1/indent

install:V: install-bin install-man

uninstall-bin:V:
	rm -f /$objtype/bin/indent

uninstall-man:V:
	rm -f /sys/man/1/indent

uninstall:V: uninstall-bin uninstall-man

cclean:V:
	rm -f [$OS].* *.[$OS]

clean:V: cclean
	rm -rf indent-*/

nuke:V: clean uninstall
