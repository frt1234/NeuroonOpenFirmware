/**
 * @file    ic_common_types.h
 * @Author  Paweł Kaźmierzewski <p.kazmierzewski@inteliclinic.com>
 * @date    July, 2017
 * @brief   Brief description
 *
 * Description
 */

#ifndef IC_COMMON_TYPES_H
#define IC_COMMON_TYPES_H

typedef enum{
  IC_SUCCESS = 0x00,
  IC_BUSY,
  IC_ERROR,
}ic_return_val_e;

#endif /* !IC_COMMON_TYPES_H */