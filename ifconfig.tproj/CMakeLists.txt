project(network_cmds-ifconfig)

add_compile_definitions(
	USE_IF_MEDIA
	NO_IPX
	INET6

	USE_VLANS
	USE_BONDS
)

add_darling_executable(ifconfig
	af_inet.c
	af_inet6.c
	af_link.c
	if6lowpan.c
	ifbond.c
	ifbridge.c
	ifclone.c
	ifconfig.c
	iffake.c
	ifmedia.c
	ifvlan.c
	nexus.c
)

install(TARGETS ifconfig DESTINATION libexec/darling/sbin)

install(FILES ifconfig.8 DESTINATION libexec/darling/usr/share/man/man8)
