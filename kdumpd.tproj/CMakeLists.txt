project(network_cmds-kdumpd)

add_darling_executable(kdumpd
	kdumpd.c
	kdumpsubs.c
)

install(TARGETS kdumpd DESTINATION libexec/darling/usr/libexec)

install(FILES kdumpd.8 DESTINATION libexec/darling/usr/share/man/man8)
