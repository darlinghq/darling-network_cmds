project(network_cmds-unbound)

include_directories(
	${CMAKE_CURRENT_SOURCE_DIR}
)

add_darling_executable(unbound
	daemon/acl_list.c
	daemon/cachedump.c
	daemon/daemon.c
	daemon/remote.c
	daemon/stats.c
	daemon/unbound.c
	daemon/worker.c

	dns64/dns64.c

	iterator/iter_delegpt.c
	iterator/iter_donotq.c
	iterator/iter_fwd.c
	iterator/iter_hints.c
	iterator/iter_priv.c
	iterator/iter_resptype.c
	iterator/iter_scrub.c
	iterator/iter_utils.c
	iterator/iterator.c

	ldns/keyraw.c
	ldns/parse.c
	ldns/parseutil.c
	ldns/rrdef.c
	ldns/sbuffer.c
	ldns/str2wire.c
	ldns/wire2str.c

	services/listen_dnsport.c
	services/localzone.c
	services/mesh.c
	services/modstack.c
	services/outbound_list.c
	services/outside_network.c

	services/cache/dns.c
	services/cache/infra.c
	services/cache/rrset.c

	util/alloc.c
	util/config_file.c
	util/configlexer.c
	util/configparser.c
	util/fptr_wlist.c
	util/locks.c
	util/log.c
	util/mini_event.c
	util/module.c
	util/net_help.c
	util/netevent.c
	util/random.c
	util/rbtree.c
	util/regional.c
	util/rtt.c
	util/timehist.c
	util/tube.c

	util/data/dname.c
	util/data/msgencode.c
	util/data/msgparse.c
	util/data/msgreply.c
	util/data/packed_rrset.c

	util/storage/dnstree.c
	util/storage/lookup3.c
	util/storage/lruhash.c
	util/storage/slabhash.c

	validator/autotrust.c
	validator/val_anchor.c
	validator/val_kcache.c
	validator/val_kentry.c
	validator/val_neg.c
	validator/val_nsec.c
	validator/val_nsec3.c
	validator/val_secalgo.c
	validator/val_sigcrypt.c
	validator/val_utils.c
	validator/validator.c
)

target_link_libraries(unbound
	crypto35
	ssl35
)

install(TARGETS unbound DESTINATION libexec/darling/usr/libexec)

install(FILES doc/unbound.8 DESTINATION libexec/darling/usr/share/man/man8)
install(FILES doc/unbound.conf.5 DESTINATION libexec/darling/usr/share/man/man5)

install(FILES doc/unbound.conf DESTINATION libexec/darling/usr/local/etc/unbound)
