project(network_cmds-ndp)

add_compile_definitions(
	INET6
	IPSEC_DEBUG
	KAME_SCOPEID
)

add_darling_executable(ndp
	ndp.c
)

install(TARGETS ndp DESTINATION libexec/darling/usr/sbin)

install(FILES ndp.8 DESTINATION libexec/darling/usr/share/man/man8)
