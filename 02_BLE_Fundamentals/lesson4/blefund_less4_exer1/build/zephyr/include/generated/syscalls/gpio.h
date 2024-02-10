/* auto-generated by gen_syscalls.py, don't edit */

#ifndef Z_INCLUDE_SYSCALLS_GPIO_H
#define Z_INCLUDE_SYSCALLS_GPIO_H


#include <zephyr/tracing/tracing_syscall.h>

#ifndef _ASMLANGUAGE

#include <stdarg.h>

#include <syscall_list.h>
#include <zephyr/syscall.h>

#include <zephyr/linker/sections.h>


#ifdef __cplusplus
extern "C" {
#endif

extern int z_impl_gpio_pin_interrupt_configure(const struct device * port, gpio_pin_t pin, gpio_flags_t flags);

__pinned_func
static inline int gpio_pin_interrupt_configure(const struct device * port, gpio_pin_t pin, gpio_flags_t flags)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; const struct device * val; } parm0 = { .val = port };
		union { uintptr_t x; gpio_pin_t val; } parm1 = { .val = pin };
		union { uintptr_t x; gpio_flags_t val; } parm2 = { .val = flags };
		return (int) arch_syscall_invoke3(parm0.x, parm1.x, parm2.x, K_SYSCALL_GPIO_PIN_INTERRUPT_CONFIGURE);
	}
#endif
	compiler_barrier();
	return z_impl_gpio_pin_interrupt_configure(port, pin, flags);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define gpio_pin_interrupt_configure(port, pin, flags) ({ 	int syscall__retval; 	sys_port_trace_syscall_enter(K_SYSCALL_GPIO_PIN_INTERRUPT_CONFIGURE, gpio_pin_interrupt_configure, port, pin, flags); 	syscall__retval = gpio_pin_interrupt_configure(port, pin, flags); 	sys_port_trace_syscall_exit(K_SYSCALL_GPIO_PIN_INTERRUPT_CONFIGURE, gpio_pin_interrupt_configure, port, pin, flags, syscall__retval); 	syscall__retval; })
#endif
#endif


extern int z_impl_gpio_pin_configure(const struct device * port, gpio_pin_t pin, gpio_flags_t flags);

__pinned_func
static inline int gpio_pin_configure(const struct device * port, gpio_pin_t pin, gpio_flags_t flags)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; const struct device * val; } parm0 = { .val = port };
		union { uintptr_t x; gpio_pin_t val; } parm1 = { .val = pin };
		union { uintptr_t x; gpio_flags_t val; } parm2 = { .val = flags };
		return (int) arch_syscall_invoke3(parm0.x, parm1.x, parm2.x, K_SYSCALL_GPIO_PIN_CONFIGURE);
	}
#endif
	compiler_barrier();
	return z_impl_gpio_pin_configure(port, pin, flags);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define gpio_pin_configure(port, pin, flags) ({ 	int syscall__retval; 	sys_port_trace_syscall_enter(K_SYSCALL_GPIO_PIN_CONFIGURE, gpio_pin_configure, port, pin, flags); 	syscall__retval = gpio_pin_configure(port, pin, flags); 	sys_port_trace_syscall_exit(K_SYSCALL_GPIO_PIN_CONFIGURE, gpio_pin_configure, port, pin, flags, syscall__retval); 	syscall__retval; })
#endif
#endif


extern int z_impl_gpio_port_get_direction(const struct device * port, gpio_port_pins_t map, gpio_port_pins_t * inputs, gpio_port_pins_t * outputs);

__pinned_func
static inline int gpio_port_get_direction(const struct device * port, gpio_port_pins_t map, gpio_port_pins_t * inputs, gpio_port_pins_t * outputs)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; const struct device * val; } parm0 = { .val = port };
		union { uintptr_t x; gpio_port_pins_t val; } parm1 = { .val = map };
		union { uintptr_t x; gpio_port_pins_t * val; } parm2 = { .val = inputs };
		union { uintptr_t x; gpio_port_pins_t * val; } parm3 = { .val = outputs };
		return (int) arch_syscall_invoke4(parm0.x, parm1.x, parm2.x, parm3.x, K_SYSCALL_GPIO_PORT_GET_DIRECTION);
	}
#endif
	compiler_barrier();
	return z_impl_gpio_port_get_direction(port, map, inputs, outputs);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define gpio_port_get_direction(port, map, inputs, outputs) ({ 	int syscall__retval; 	sys_port_trace_syscall_enter(K_SYSCALL_GPIO_PORT_GET_DIRECTION, gpio_port_get_direction, port, map, inputs, outputs); 	syscall__retval = gpio_port_get_direction(port, map, inputs, outputs); 	sys_port_trace_syscall_exit(K_SYSCALL_GPIO_PORT_GET_DIRECTION, gpio_port_get_direction, port, map, inputs, outputs, syscall__retval); 	syscall__retval; })
#endif
#endif


extern int z_impl_gpio_pin_get_config(const struct device * port, gpio_pin_t pin, gpio_flags_t * flags);

__pinned_func
static inline int gpio_pin_get_config(const struct device * port, gpio_pin_t pin, gpio_flags_t * flags)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; const struct device * val; } parm0 = { .val = port };
		union { uintptr_t x; gpio_pin_t val; } parm1 = { .val = pin };
		union { uintptr_t x; gpio_flags_t * val; } parm2 = { .val = flags };
		return (int) arch_syscall_invoke3(parm0.x, parm1.x, parm2.x, K_SYSCALL_GPIO_PIN_GET_CONFIG);
	}
#endif
	compiler_barrier();
	return z_impl_gpio_pin_get_config(port, pin, flags);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define gpio_pin_get_config(port, pin, flags) ({ 	int syscall__retval; 	sys_port_trace_syscall_enter(K_SYSCALL_GPIO_PIN_GET_CONFIG, gpio_pin_get_config, port, pin, flags); 	syscall__retval = gpio_pin_get_config(port, pin, flags); 	sys_port_trace_syscall_exit(K_SYSCALL_GPIO_PIN_GET_CONFIG, gpio_pin_get_config, port, pin, flags, syscall__retval); 	syscall__retval; })
#endif
#endif


extern int z_impl_gpio_port_get_raw(const struct device * port, gpio_port_value_t * value);

__pinned_func
static inline int gpio_port_get_raw(const struct device * port, gpio_port_value_t * value)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; const struct device * val; } parm0 = { .val = port };
		union { uintptr_t x; gpio_port_value_t * val; } parm1 = { .val = value };
		return (int) arch_syscall_invoke2(parm0.x, parm1.x, K_SYSCALL_GPIO_PORT_GET_RAW);
	}
#endif
	compiler_barrier();
	return z_impl_gpio_port_get_raw(port, value);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define gpio_port_get_raw(port, value) ({ 	int syscall__retval; 	sys_port_trace_syscall_enter(K_SYSCALL_GPIO_PORT_GET_RAW, gpio_port_get_raw, port, value); 	syscall__retval = gpio_port_get_raw(port, value); 	sys_port_trace_syscall_exit(K_SYSCALL_GPIO_PORT_GET_RAW, gpio_port_get_raw, port, value, syscall__retval); 	syscall__retval; })
#endif
#endif


extern int z_impl_gpio_port_set_masked_raw(const struct device * port, gpio_port_pins_t mask, gpio_port_value_t value);

__pinned_func
static inline int gpio_port_set_masked_raw(const struct device * port, gpio_port_pins_t mask, gpio_port_value_t value)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; const struct device * val; } parm0 = { .val = port };
		union { uintptr_t x; gpio_port_pins_t val; } parm1 = { .val = mask };
		union { uintptr_t x; gpio_port_value_t val; } parm2 = { .val = value };
		return (int) arch_syscall_invoke3(parm0.x, parm1.x, parm2.x, K_SYSCALL_GPIO_PORT_SET_MASKED_RAW);
	}
#endif
	compiler_barrier();
	return z_impl_gpio_port_set_masked_raw(port, mask, value);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define gpio_port_set_masked_raw(port, mask, value) ({ 	int syscall__retval; 	sys_port_trace_syscall_enter(K_SYSCALL_GPIO_PORT_SET_MASKED_RAW, gpio_port_set_masked_raw, port, mask, value); 	syscall__retval = gpio_port_set_masked_raw(port, mask, value); 	sys_port_trace_syscall_exit(K_SYSCALL_GPIO_PORT_SET_MASKED_RAW, gpio_port_set_masked_raw, port, mask, value, syscall__retval); 	syscall__retval; })
#endif
#endif


extern int z_impl_gpio_port_set_bits_raw(const struct device * port, gpio_port_pins_t pins);

__pinned_func
static inline int gpio_port_set_bits_raw(const struct device * port, gpio_port_pins_t pins)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; const struct device * val; } parm0 = { .val = port };
		union { uintptr_t x; gpio_port_pins_t val; } parm1 = { .val = pins };
		return (int) arch_syscall_invoke2(parm0.x, parm1.x, K_SYSCALL_GPIO_PORT_SET_BITS_RAW);
	}
#endif
	compiler_barrier();
	return z_impl_gpio_port_set_bits_raw(port, pins);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define gpio_port_set_bits_raw(port, pins) ({ 	int syscall__retval; 	sys_port_trace_syscall_enter(K_SYSCALL_GPIO_PORT_SET_BITS_RAW, gpio_port_set_bits_raw, port, pins); 	syscall__retval = gpio_port_set_bits_raw(port, pins); 	sys_port_trace_syscall_exit(K_SYSCALL_GPIO_PORT_SET_BITS_RAW, gpio_port_set_bits_raw, port, pins, syscall__retval); 	syscall__retval; })
#endif
#endif


extern int z_impl_gpio_port_clear_bits_raw(const struct device * port, gpio_port_pins_t pins);

__pinned_func
static inline int gpio_port_clear_bits_raw(const struct device * port, gpio_port_pins_t pins)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; const struct device * val; } parm0 = { .val = port };
		union { uintptr_t x; gpio_port_pins_t val; } parm1 = { .val = pins };
		return (int) arch_syscall_invoke2(parm0.x, parm1.x, K_SYSCALL_GPIO_PORT_CLEAR_BITS_RAW);
	}
#endif
	compiler_barrier();
	return z_impl_gpio_port_clear_bits_raw(port, pins);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define gpio_port_clear_bits_raw(port, pins) ({ 	int syscall__retval; 	sys_port_trace_syscall_enter(K_SYSCALL_GPIO_PORT_CLEAR_BITS_RAW, gpio_port_clear_bits_raw, port, pins); 	syscall__retval = gpio_port_clear_bits_raw(port, pins); 	sys_port_trace_syscall_exit(K_SYSCALL_GPIO_PORT_CLEAR_BITS_RAW, gpio_port_clear_bits_raw, port, pins, syscall__retval); 	syscall__retval; })
#endif
#endif


extern int z_impl_gpio_port_toggle_bits(const struct device * port, gpio_port_pins_t pins);

__pinned_func
static inline int gpio_port_toggle_bits(const struct device * port, gpio_port_pins_t pins)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; const struct device * val; } parm0 = { .val = port };
		union { uintptr_t x; gpio_port_pins_t val; } parm1 = { .val = pins };
		return (int) arch_syscall_invoke2(parm0.x, parm1.x, K_SYSCALL_GPIO_PORT_TOGGLE_BITS);
	}
#endif
	compiler_barrier();
	return z_impl_gpio_port_toggle_bits(port, pins);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define gpio_port_toggle_bits(port, pins) ({ 	int syscall__retval; 	sys_port_trace_syscall_enter(K_SYSCALL_GPIO_PORT_TOGGLE_BITS, gpio_port_toggle_bits, port, pins); 	syscall__retval = gpio_port_toggle_bits(port, pins); 	sys_port_trace_syscall_exit(K_SYSCALL_GPIO_PORT_TOGGLE_BITS, gpio_port_toggle_bits, port, pins, syscall__retval); 	syscall__retval; })
#endif
#endif


extern int z_impl_gpio_get_pending_int(const struct device * dev);

__pinned_func
static inline int gpio_get_pending_int(const struct device * dev)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; const struct device * val; } parm0 = { .val = dev };
		return (int) arch_syscall_invoke1(parm0.x, K_SYSCALL_GPIO_GET_PENDING_INT);
	}
#endif
	compiler_barrier();
	return z_impl_gpio_get_pending_int(dev);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define gpio_get_pending_int(dev) ({ 	int syscall__retval; 	sys_port_trace_syscall_enter(K_SYSCALL_GPIO_GET_PENDING_INT, gpio_get_pending_int, dev); 	syscall__retval = gpio_get_pending_int(dev); 	sys_port_trace_syscall_exit(K_SYSCALL_GPIO_GET_PENDING_INT, gpio_get_pending_int, dev, syscall__retval); 	syscall__retval; })
#endif
#endif


#ifdef __cplusplus
}
#endif

#endif
#endif /* include guard */
