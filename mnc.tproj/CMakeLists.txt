project(network_cmds-mnc)

add_darling_executable(mnc
	mnc_error.c
	mnc_main.c
	mnc_multicast.c
	mnc_opts.c
)

install(TARGETS mnc DESTINATION libexec/darling/usr/bin)

install(FILES mnc.1 DESTINATION libexec/darling/usr/share/man/man1)
