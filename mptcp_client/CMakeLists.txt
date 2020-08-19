project(network_cmds-mptcp_client)

add_darling_executable(mptcp_client
	conn_lib.c
	mptcp_client.c
)

install(TARGETS mptcp_client DESTINATION libexec/darling/usr/bin)

install(FILES mptcp_client.1 DESTINATION libexec/darling/usr/share/man/man1)
