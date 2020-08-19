project(network_cmds-mtest)

add_darling_executable(mtest
	mtest.c
)

install(TARGETS mtest DESTINATION libexec/darling/usr/bin)

install(FILES mtest.8 DESTINATION libexec/darling/usr/share/man/man8)
