project(network_cmds-pktapctl)

add_darling_executable(pktapctl
	pktapctl.c
)

install(TARGETS pktapctl DESTINATION libexec/darling/usr/bin)

install(FILES pktapctl.8 DESTINATION libexec/darling/usr/share/man/man8)

