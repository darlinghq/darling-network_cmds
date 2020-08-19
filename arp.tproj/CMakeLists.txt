project(network_cmds-arp)

add_darling_executable(arp
	arp.c
)

install(TARGETS arp DESTINATION libexec/darling/usr/sbin)

install(FILES arp.8 DESTINATION libexec/darling/usr/share/man/man8)
#install(FILES arp4.4 DESTINATION libexec/darling/usr/share/man/man4 RENAME arp.4) # apparently not installed by this project?
