/** \file i2c.h
 *
 * \author Richard Tomlinson G4TGJ
 */ 


#ifndef I2C_H
#define I2C_H

#include <inttypes.h>

/// Initialise the I2C driver.
///
/// Must be called before any other I2C functions.
void i2cInit();

/// Write an 8 bit byte to I2C.
///
/// @param[in] addr I2C address
/// @param[in] data Data to write
uint8_t i2cWriteByte(uint8_t i2cAddr, uint8_t data);

/// Write to an 8 bit register over I2C.
///
/// @param[in] addr I2C address
/// @param[in] reg Register address
/// @param[in] data Data to write to register
uint8_t i2cWriteRegister(uint8_t addr, uint8_t reg, uint8_t data);

/// Write to a 9 bit register over I2C.
///
/// @param[in] addr I2C address
/// @param[in] reg Register address
/// @param[in] data Data to write to register
uint8_t i2cWriteRegister9Bit(uint8_t addr, uint8_t reg, uint16_t data);

/// Read from an 8 bit register over I2C.
///
/// @param[in] addr I2C address
/// @param[in] reg Register address
/// @param[out] data Pointer to data location to write contents of register to
uint8_t i2cReadRegister(uint8_t addr, uint8_t reg, uint8_t *data);

/// Write to an 8 bit register over I2C with a 16 bit register address.
///
/// @param[in] addr I2C address
/// @param[in] reg Register address
/// @param[in] data Data to write to register
uint8_t i2cWriteRegisterA16(uint8_t addr, uint16_t reg, uint8_t data);

/// Read from an 8 bit register over I2C with a 16 bit register address.
///
/// @param[in] addr I2C address
/// @param[in] reg Register address
/// @param[out] data Pointer to data location to write contents of register to
uint8_t i2cReadRegisterA16(uint8_t addr, uint16_t reg, uint8_t *data);

/// Write data over I2C with a 16 bit memory address.
///
/// @param[in] addr I2C address
/// @param[in] reg Memory address
/// @param[out] data Pointer to data
/// @param[in] num Number of bytes to write
uint8_t i2cWriteDataA16(uint8_t addr, uint16_t reg, uint8_t *data, int num);

/// Read data over I2C with a 16 bit memory address.
///
/// @param[in] addr I2C address
/// @param[in] reg Memory address
/// @param[out] data Pointer to data location to write contents of register to
/// @param[in] num Number of bytes to read
uint8_t i2cReadDataA16(uint8_t addr, uint16_t reg, uint8_t *data, int num);

/// Wait for an I2C address to acknowledge
/// Used to wait for a device to be ready
/// e.g EEPROM write
/// @param[in] addr I2C address
void i2cWait( uint8_t addr );

#endif //I2C_H
