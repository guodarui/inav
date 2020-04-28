/*
 * This file is part of iNav.
 *
 * iNav is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * iNav is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with iNav. If not, see <http://www.gnu.org/licenses/>.
 */

#include <stdbool.h>
#include <stdint.h>

#define FRSKY_CHECKSUM_GOOD_VALUE 0xFF

bool frskyChecksumIsGood(uint8_t *data, uint8_t length);
void frskyCheckSumStep(uint16_t *checksum, uint8_t byte);   // Add byte to checksum
void frskyCheckSumFini(uint16_t *checksum);                 // Finalize checksum
