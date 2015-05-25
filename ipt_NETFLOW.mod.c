#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x14522340, "module_layout" },
	{ 0x55a286bf, "proc_dointvec_minmax" },
	{ 0x806e575f, "kmem_cache_destroy" },
	{ 0xe90dcae0, "__request_module" },
	{ 0x5a34a45c, "__kmalloc" },
	{ 0x7ee91c1d, "_spin_trylock" },
	{ 0xdae48196, "kernel_sendmsg" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x7ca65271, "single_open" },
	{ 0x6980fe91, "param_get_int" },
	{ 0xd42b7232, "_write_unlock_bh" },
	{ 0x25ec1b28, "strlen" },
	{ 0x1a75caa3, "_read_lock" },
	{ 0x3fa913da, "strspn" },
	{ 0x98b4a5e7, "nf_conntrack_event_cb" },
	{ 0xc486663d, "seq_release_private" },
	{ 0x950ffff2, "cpu_online_mask" },
	{ 0xc1d878fa, "single_release" },
	{ 0xd691cba2, "malloc_sizes" },
	{ 0x96461b6f, "seq_puts" },
	{ 0xa1cea0b8, "proc_dointvec" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xaed2f3f9, "sock_release" },
	{ 0x56f38712, "schedule_delayed_work_on" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x973873ab, "_spin_lock" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x77e93f6f, "seq_printf" },
	{ 0x1a6d6e4f, "remove_proc_entry" },
	{ 0x6a9f26c9, "init_timer_key" },
	{ 0xe91d52ab, "sock_create_kern" },
	{ 0x30ffe1f7, "cancel_delayed_work_sync" },
	{ 0x3758301, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x2447533c, "ktime_get_real" },
	{ 0xff964b25, "param_set_int" },
	{ 0xafe82e10, "strcspn" },
	{ 0x77fa5d1f, "ns_to_timespec" },
	{ 0xb72ec8a3, "seq_read" },
	{ 0x7d11c268, "jiffies" },
	{ 0x343a1a8, "__list_add" },
	{ 0x9629486a, "per_cpu__cpu_number" },
	{ 0xfe7c4287, "nr_cpu_ids" },
	{ 0x41344088, "param_get_charp" },
	{ 0xe83fea1, "del_timer_sync" },
	{ 0xde0bdcff, "memset" },
	{ 0xe4c1df3e, "_read_lock_bh" },
	{ 0x8d3894f2, "_ctype" },
	{ 0xa2a1e5c9, "_write_lock_bh" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xec69f91c, "__seq_open_private" },
	{ 0xea147363, "printk" },
	{ 0x8e0b7743, "ipv6_ext_hdr" },
	{ 0x85da6302, "xt_register_targets" },
	{ 0xb4390f9a, "mcount" },
	{ 0x672144bd, "strlcpy" },
	{ 0x7329e40d, "kmem_cache_free" },
	{ 0xfee8a795, "mutex_lock" },
	{ 0x948cde9, "num_physpages" },
	{ 0x521445b, "list_del" },
	{ 0xe81f0e4, "cpu_present_mask" },
	{ 0xc2cdbf1, "synchronize_sched" },
	{ 0x45450063, "mod_timer" },
	{ 0x1c740bd6, "init_net" },
	{ 0x204857ac, "proc_dostring" },
	{ 0xfc6256b9, "boot_tvec_bases" },
	{ 0x9ca70c75, "xt_unregister_targets" },
	{ 0x57adf756, "per_cpu__this_cpu_off" },
	{ 0x3ff62317, "local_bh_disable" },
	{ 0xee065ced, "kmem_cache_alloc" },
	{ 0x32e36503, "unregister_sysctl_table" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x340e0ae, "schedule_delayed_work" },
	{ 0x108e8985, "param_get_uint" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x799aca4, "local_bh_enable" },
	{ 0x88216c86, "nf_conntrack_unregister_notifier" },
	{ 0x6d6b15ff, "create_proc_entry" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xccd71539, "use_module" },
	{ 0x49da9a9a, "_read_unlock_bh" },
	{ 0x8ee69235, "timeval_to_jiffies" },
	{ 0x2044fa9e, "kmem_cache_alloc_trace" },
	{ 0x32047ad5, "__per_cpu_offset" },
	{ 0xe4a639f8, "kmem_cache_create" },
	{ 0x6ad065f4, "param_set_charp" },
	{ 0x1d2e87c6, "do_gettimeofday" },
	{ 0x8d66a3a, "warn_slowpath_fmt" },
	{ 0x288439d5, "find_module" },
	{ 0x3aa1dbcf, "_spin_unlock_bh" },
	{ 0x5ca8e4f6, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x236c8c64, "memcpy" },
	{ 0x3285cc48, "param_set_uint" },
	{ 0xe24050c7, "scnprintf" },
	{ 0x4cbbd171, "__bitmap_weight" },
	{ 0x9edbecae, "snprintf" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x93cbd1ec, "_spin_lock_bh" },
	{ 0x20242fb9, "skb_copy_bits" },
	{ 0xc56d640f, "nf_conntrack_register_notifier" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xce703cc5, "register_sysctl_paths" },
	{ 0xdf4c8767, "ns_to_timeval" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack";


MODULE_INFO(srcversion, "D029ADECDBE76912F270BA0");

static const struct rheldata _rheldata __used
__attribute__((section(".rheldata"))) = {
	.rhel_major = 6,
	.rhel_minor = 6,
};
