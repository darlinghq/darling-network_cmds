project(network_cmds-pktmnglr)

add_darling_executable(pktmnglr
	packet_mangler.c
)

install(TARGETS pktmnglr DESTINATION libexec/darling/usr/bin)
