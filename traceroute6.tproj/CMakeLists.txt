project(network_cmds-traceroute6)

add_compile_definitions(
	INET6
	IPSEC
)

add_darling_executable(traceroute6
	traceroute6.c
)

target_link_libraries(traceroute6
	ipsec
)

install(TARGETS traceroute6 DESTINATION libexec/darling/usr/sbin)

install(FILES traceroute6.8 DESTINATION libexec/darling/usr/share/man/man8)

