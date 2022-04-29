project(network_cmds-netstat)

add_compile_definitions(
	INET6
	IPSEC
)

add_darling_executable(netstat
	data.c
	if.c
	inet.c
	inet6.c
	ipsec.c
	main.c
	mbuf.c
	mcast.c
	misc.c
	mptcp.c
	route.c
	systm.c
	tp_astring.c
	unix.c
	vsock.c
)

install(TARGETS netstat DESTINATION libexec/darling/usr/sbin)

install(FILES netstat.1 DESTINATION libexec/darling/usr/share/man/man1)
