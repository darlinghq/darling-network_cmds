project(network_cmds-traceroute)

add_compile_definitions(
	HAVE_SOCKADDR_SA_LEN
)

add_darling_executable(traceroute
	as.c
	findsaddr-socket.c
	ifaddrlist.c
	traceroute.c
	version.c
)

install(TARGETS traceroute DESTINATION libexec/darling/usr/sbin)

install(FILES traceroute.8 DESTINATION libexec/darling/usr/share/man/man8)

