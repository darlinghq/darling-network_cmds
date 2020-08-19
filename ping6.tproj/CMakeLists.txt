project(network_cmds-ping6)

add_darling_executable(ping6
	ping6.c
	md5.c
	../ecnprobe/gmt2local.c
)

target_link_libraries(ping6
	ipsec
)

install(TARGETS ping6 DESTINATION libexec/darling/sbin)

install(FILES ping6.8 DESTINATION libexec/darling/usr/share/man/man8)
