project(network_cmds-cfilutil)

add_darling_executable(cfilutil
	cfilstat.c
	cfilutil.c
)

install(TARGETS cfilutil DESTINATION libexec/darling/usr/bin)

install(FILES cfilutil.1 DESTINATION libexec/darling/usr/share/man/man1)
