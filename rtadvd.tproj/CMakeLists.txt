project(network_cmds-rtadvd)

add_compile_definitions(
	INET6
	HAVE_GETIFADDRS
)

add_darling_executable(rtadvd
	advcap.c
	config.c
	dump.c
	if.c
	rrenum.c
	rtadvd_logging.c
	rtadvd.c
	timer.c
)

target_link_libraries(rtadvd
	util
)

install(TARGETS rtadvd DESTINATION libexec/darling/usr/sbin)

install(FILES rtadvd.8 DESTINATION libexec/darling/usr/share/man/man8)

install(FILES rtadvd.conf.5 DESTINATION libexec/darling/usr/share/man/man5)

install(FILES rtadvd.conf DESTINATION libexec/darling/private/etc)
