project(network_cmds-rtsol)

add_compile_definitions(
	INET6
	HAVE_GETIFADDRS
)

add_darling_executable(rtsol
	dump.c
	if.c
	probe.c
	rtsock.c
	rtsol.c
	rtsold.c
)

install(TARGETS rtsol DESTINATION libexec/darling/sbin)

install(FILES rtsol.8 DESTINATION libexec/darling/usr/share/man/man8)
