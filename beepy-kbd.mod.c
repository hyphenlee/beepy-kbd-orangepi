#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/export-internal.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif


static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x4db257ba, "filp_open" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xa8743c5b, "__class_create" },
	{ 0x833e8b97, "devm_request_threaded_irq" },
	{ 0xbf0dd6fb, "devm_kmalloc" },
	{ 0x77bc13a0, "strim" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x773cd21a, "class_destroy" },
	{ 0xe5ea3d4, "devm_input_allocate_device" },
	{ 0xb79558d1, "param_set_charp" },
	{ 0x92997ed8, "_printk" },
	{ 0x20903938, "input_register_device" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x6444b892, "_dev_info" },
	{ 0xc6cbbc89, "capable" },
	{ 0x954ab9ee, "cdev_add" },
	{ 0x7c6ce43b, "i2c_register_driver" },
	{ 0x84a4b48, "devm_kmemdup" },
	{ 0xbca1ff89, "_dev_err" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x8336a5f1, "device_create" },
	{ 0x3965918e, "input_set_capability" },
	{ 0x84b183ae, "strncmp" },
	{ 0x4ac02e7a, "fasync_helper" },
	{ 0x328a05f1, "strncpy" },
	{ 0xe3e92cfa, "sysfs_create_group" },
	{ 0x3844ea2e, "firmware_kobj" },
	{ 0x7b26cef6, "_dev_warn" },
	{ 0xbe241485, "i2c_smbus_read_word_data" },
	{ 0xab38601f, "param_get_charp" },
	{ 0xbab36724, "input_event" },
	{ 0x4929d2a5, "kobject_create_and_add" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x32fae469, "filp_close" },
	{ 0xeba1d604, "device_destroy" },
	{ 0xdfc148ec, "i2c_smbus_write_byte_data" },
	{ 0xe5633b20, "i2c_del_driver" },
	{ 0x2a885f93, "i2c_smbus_read_byte_data" },
	{ 0x71d340fc, "cdev_init" },
	{ 0x2088b469, "cdev_del" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc46d5dd8, "kobject_put" },
	{ 0xcaa72ffd, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cbeepy-kbd");
MODULE_ALIAS("of:N*T*Cbeepy-kbdC*");
MODULE_ALIAS("i2c:beepy-kbd");

MODULE_INFO(srcversion, "FE246407DF7675E60D3D378");
