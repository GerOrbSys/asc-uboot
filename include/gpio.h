/*
 *
 * (c) 20100 Ridgerun, Todd Fischer <todd.fischer@ridgerun.com>
 *
 * Based on MXC specific GPIO work by Sascha Hauer
 *
 * See file CREDITS for list of people who contributed to this
 * project.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston,
 * MA 02111-1307 USA
 */

#ifndef __GPIO_H
#define __GPIO_H

#ifdef CONFIG_GPIO
enum gpio_direction {
	GPIO_DIRECTION_IN,
	GPIO_DIRECTION_OUT,
};

extern int gpio_max_ios(void);
extern int gpio_dir(unsigned int gpio, enum gpio_direction direction);
extern int gpio_set(unsigned int gpio, unsigned int value);
extern int gpio_get(unsigned int gpio, enum gpio_direction *direction, int *value);
#endif

#endif

