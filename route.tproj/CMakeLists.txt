project(network_cmds-route)

add_compile_definitions(
	INET6
	IPSEC
)

add_darling_executable(route
	route.c
)

install(TARGETS route DESTINATION libexec/darling/sbin)

install(FILES route.8 DESTINATION libexec/darling/usr/share/man/man8)
