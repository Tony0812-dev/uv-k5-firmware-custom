/* Copyright 2023 Dual Tachyon
 * https://github.com/DualTachyon
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef HARDWARE_DP32G030_DMA_H
#define HARDWARE_DP32G030_DMA_H

#if !defined(__ASSEMBLY__)
#include <stdint.h>
#endif

/* -------- DMA -------- */
#define DMA_BASE_ADDR                          0x40001000U
#define DMA_BASE_SIZE                          0x00000100U

#define DMA_CTR_ADDR                           (DMA_BASE_ADDR + 0x0000U)
#define DMA_CTR                                (*(volatile uint32_t *)DMA_CTR_ADDR)
#define DMA_CTR_DMAEN_SHIFT                    0
#define DMA_CTR_DMAEN_WIDTH                    1
#define DMA_CTR_DMAEN_MASK                     (((1U << DMA_CTR_DMAEN_WIDTH) - 1U) << DMA_CTR_DMAEN_SHIFT)
#define DMA_CTR_DMAEN_VALUE_DISABLE            0U
#define DMA_CTR_DMAEN_BITS_DISABLE             (DMA_CTR_DMAEN_VALUE_DISABLE << DMA_CTR_DMAEN_SHIFT)
#define DMA_CTR_DMAEN_VALUE_ENABLE             1U
#define DMA_CTR_DMAEN_BITS_ENABLE              (DMA_CTR_DMAEN_VALUE_ENABLE << DMA_CTR_DMAEN_SHIFT)

#define DMA_INTEN_ADDR                         (DMA_BASE_ADDR + 0x0004U)
#define DMA_INTEN                              (*(volatile uint32_t *)DMA_INTEN_ADDR)
#define DMA_INTEN_CH0_TC_INTEN_SHIFT           0
#define DMA_INTEN_CH0_TC_INTEN_WIDTH           1
#define DMA_INTEN_CH0_TC_INTEN_MASK            (((1U << DMA_INTEN_CH0_TC_INTEN_WIDTH) - 1U) << DMA_INTEN_CH0_TC_INTEN_SHIFT)
#define DMA_INTEN_CH0_TC_INTEN_VALUE_DISABLE   0U
#define DMA_INTEN_CH0_TC_INTEN_BITS_DISABLE    (DMA_INTEN_CH0_TC_INTEN_VALUE_DISABLE << DMA_INTEN_CH0_TC_INTEN_SHIFT)
#define DMA_INTEN_CH0_TC_INTEN_VALUE_ENABLE    1U
#define DMA_INTEN_CH0_TC_INTEN_BITS_ENABLE     (DMA_INTEN_CH0_TC_INTEN_VALUE_ENABLE << DMA_INTEN_CH0_TC_INTEN_SHIFT)

#define DMA_INTEN_CH1_TC_INTEN_SHIFT           1
#define DMA_INTEN_CH1_TC_INTEN_WIDTH           1
#define DMA_INTEN_CH1_TC_INTEN_MASK            (((1U << DMA_INTEN_CH1_TC_INTEN_WIDTH) - 1U) << DMA_INTEN_CH1_TC_INTEN_SHIFT)
#define DMA_INTEN_CH1_TC_INTEN_VALUE_DISABLE   0U
#define DMA_INTEN_CH1_TC_INTEN_BITS_DISABLE    (DMA_INTEN_CH1_TC_INTEN_VALUE_DISABLE << DMA_INTEN_CH1_TC_INTEN_SHIFT)
#define DMA_INTEN_CH1_TC_INTEN_VALUE_ENABLE    1U
#define DMA_INTEN_CH1_TC_INTEN_BITS_ENABLE     (DMA_INTEN_CH1_TC_INTEN_VALUE_ENABLE << DMA_INTEN_CH1_TC_INTEN_SHIFT)

#define DMA_INTEN_CH2_TC_INTEN_SHIFT           2
#define DMA_INTEN_CH2_TC_INTEN_WIDTH           1
#define DMA_INTEN_CH2_TC_INTEN_MASK            (((1U << DMA_INTEN_CH2_TC_INTEN_WIDTH) - 1U) << DMA_INTEN_CH2_TC_INTEN_SHIFT)
#define DMA_INTEN_CH2_TC_INTEN_VALUE_DISABLE   0U
#define DMA_INTEN_CH2_TC_INTEN_BITS_DISABLE    (DMA_INTEN_CH2_TC_INTEN_VALUE_DISABLE << DMA_INTEN_CH2_TC_INTEN_SHIFT)
#define DMA_INTEN_CH2_TC_INTEN_VALUE_ENABLE    1U
#define DMA_INTEN_CH2_TC_INTEN_BITS_ENABLE     (DMA_INTEN_CH2_TC_INTEN_VALUE_ENABLE << DMA_INTEN_CH2_TC_INTEN_SHIFT)

#define DMA_INTEN_CH3_TC_INTEN_SHIFT           3
#define DMA_INTEN_CH3_TC_INTEN_WIDTH           1
#define DMA_INTEN_CH3_TC_INTEN_MASK            (((1U << DMA_INTEN_CH3_TC_INTEN_WIDTH) - 1U) << DMA_INTEN_CH3_TC_INTEN_SHIFT)
#define DMA_INTEN_CH3_TC_INTEN_VALUE_DISABLE   0U
#define DMA_INTEN_CH3_TC_INTEN_BITS_DISABLE    (DMA_INTEN_CH3_TC_INTEN_VALUE_DISABLE << DMA_INTEN_CH3_TC_INTEN_SHIFT)
#define DMA_INTEN_CH3_TC_INTEN_VALUE_ENABLE    1U
#define DMA_INTEN_CH3_TC_INTEN_BITS_ENABLE     (DMA_INTEN_CH3_TC_INTEN_VALUE_ENABLE << DMA_INTEN_CH3_TC_INTEN_SHIFT)

#define DMA_INTEN_CH0_THC_INTEN_SHIFT          8
#define DMA_INTEN_CH0_THC_INTEN_WIDTH          1
#define DMA_INTEN_CH0_THC_INTEN_MASK           (((1U << DMA_INTEN_CH0_THC_INTEN_WIDTH) - 1U) << DMA_INTEN_CH0_THC_INTEN_SHIFT)
#define DMA_INTEN_CH0_THC_INTEN_VALUE_DISABLE  0U
#define DMA_INTEN_CH0_THC_INTEN_BITS_DISABLE   (DMA_INTEN_CH0_THC_INTEN_VALUE_DISABLE << DMA_INTEN_CH0_THC_INTEN_SHIFT)
#define DMA_INTEN_CH0_THC_INTEN_VALUE_ENABLE   1U
#define DMA_INTEN_CH0_THC_INTEN_BITS_ENABLE    (DMA_INTEN_CH0_THC_INTEN_VALUE_ENABLE << DMA_INTEN_CH0_THC_INTEN_SHIFT)

#define DMA_INTEN_CH1_THC_INTEN_SHIFT          9
#define DMA_INTEN_CH1_THC_INTEN_WIDTH          1
#define DMA_INTEN_CH1_THC_INTEN_MASK           (((1U << DMA_INTEN_CH1_THC_INTEN_WIDTH) - 1U) << DMA_INTEN_CH1_THC_INTEN_SHIFT)
#define DMA_INTEN_CH1_THC_INTEN_VALUE_DISABLE  0U
#define DMA_INTEN_CH1_THC_INTEN_BITS_DISABLE   (DMA_INTEN_CH1_THC_INTEN_VALUE_DISABLE << DMA_INTEN_CH1_THC_INTEN_SHIFT)
#define DMA_INTEN_CH1_THC_INTEN_VALUE_ENABLE   1U
#define DMA_INTEN_CH1_THC_INTEN_BITS_ENABLE    (DMA_INTEN_CH1_THC_INTEN_VALUE_ENABLE << DMA_INTEN_CH1_THC_INTEN_SHIFT)

#define DMA_INTEN_CH2_THC_INTEN_SHIFT          10
#define DMA_INTEN_CH2_THC_INTEN_WIDTH          1
#define DMA_INTEN_CH2_THC_INTEN_MASK           (((1U << DMA_INTEN_CH2_THC_INTEN_WIDTH) - 1U) << DMA_INTEN_CH2_THC_INTEN_SHIFT)
#define DMA_INTEN_CH2_THC_INTEN_VALUE_DISABLE  0U
#define DMA_INTEN_CH2_THC_INTEN_BITS_DISABLE   (DMA_INTEN_CH2_THC_INTEN_VALUE_DISABLE << DMA_INTEN_CH2_THC_INTEN_SHIFT)
#define DMA_INTEN_CH2_THC_INTEN_VALUE_ENABLE   1U
#define DMA_INTEN_CH2_THC_INTEN_BITS_ENABLE    (DMA_INTEN_CH2_THC_INTEN_VALUE_ENABLE << DMA_INTEN_CH2_THC_INTEN_SHIFT)

#define DMA_INTEN_CH3_THC_INTEN_SHIFT          11
#define DMA_INTEN_CH3_THC_INTEN_WIDTH          1
#define DMA_INTEN_CH3_THC_INTEN_MASK           (((1U << DMA_INTEN_CH3_THC_INTEN_WIDTH) - 1U) << DMA_INTEN_CH3_THC_INTEN_SHIFT)
#define DMA_INTEN_CH3_THC_INTEN_VALUE_DISABLE  0U
#define DMA_INTEN_CH3_THC_INTEN_BITS_DISABLE   (DMA_INTEN_CH3_THC_INTEN_VALUE_DISABLE << DMA_INTEN_CH3_THC_INTEN_SHIFT)
#define DMA_INTEN_CH3_THC_INTEN_VALUE_ENABLE   1U
#define DMA_INTEN_CH3_THC_INTEN_BITS_ENABLE    (DMA_INTEN_CH3_THC_INTEN_VALUE_ENABLE << DMA_INTEN_CH3_THC_INTEN_SHIFT)

#define DMA_INTST_ADDR                         (DMA_BASE_ADDR + 0x0008U)
#define DMA_INTST                              (*(volatile uint32_t *)DMA_INTST_ADDR)
#define DMA_INTST_CH0_TC_INTST_SHIFT           0
#define DMA_INTST_CH0_TC_INTST_WIDTH           1
#define DMA_INTST_CH0_TC_INTST_MASK            (((1U << DMA_INTST_CH0_TC_INTST_WIDTH) - 1U) << DMA_INTST_CH0_TC_INTST_SHIFT)
#define DMA_INTST_CH0_TC_INTST_VALUE_NOT_SET   0U
#define DMA_INTST_CH0_TC_INTST_BITS_NOT_SET    (DMA_INTST_CH0_TC_INTST_VALUE_NOT_SET << DMA_INTST_CH0_TC_INTST_SHIFT)
#define DMA_INTST_CH0_TC_INTST_VALUE_SET       1U
#define DMA_INTST_CH0_TC_INTST_BITS_SET        (DMA_INTST_CH0_TC_INTST_VALUE_SET << DMA_INTST_CH0_TC_INTST_SHIFT)

#define DMA_INTST_CH1_TC_INTST_SHIFT           1
#define DMA_INTST_CH1_TC_INTST_WIDTH           1
#define DMA_INTST_CH1_TC_INTST_MASK            (((1U << DMA_INTST_CH1_TC_INTST_WIDTH) - 1U) << DMA_INTST_CH1_TC_INTST_SHIFT)
#define DMA_INTST_CH1_TC_INTST_VALUE_NOT_SET   0U
#define DMA_INTST_CH1_TC_INTST_BITS_NOT_SET    (DMA_INTST_CH1_TC_INTST_VALUE_NOT_SET << DMA_INTST_CH1_TC_INTST_SHIFT)
#define DMA_INTST_CH1_TC_INTST_VALUE_SET       1U
#define DMA_INTST_CH1_TC_INTST_BITS_SET        (DMA_INTST_CH1_TC_INTST_VALUE_SET << DMA_INTST_CH1_TC_INTST_SHIFT)

#define DMA_INTST_CH2_TC_INTST_SHIFT           2
#define DMA_INTST_CH2_TC_INTST_WIDTH           1
#define DMA_INTST_CH2_TC_INTST_MASK            (((1U << DMA_INTST_CH2_TC_INTST_WIDTH) - 1U) << DMA_INTST_CH2_TC_INTST_SHIFT)
#define DMA_INTST_CH2_TC_INTST_VALUE_NOT_SET   0U
#define DMA_INTST_CH2_TC_INTST_BITS_NOT_SET    (DMA_INTST_CH2_TC_INTST_VALUE_NOT_SET << DMA_INTST_CH2_TC_INTST_SHIFT)
#define DMA_INTST_CH2_TC_INTST_VALUE_SET       1U
#define DMA_INTST_CH2_TC_INTST_BITS_SET        (DMA_INTST_CH2_TC_INTST_VALUE_SET << DMA_INTST_CH2_TC_INTST_SHIFT)

#define DMA_INTST_CH3_TC_INTST_SHIFT           3
#define DMA_INTST_CH3_TC_INTST_WIDTH           1
#define DMA_INTST_CH3_TC_INTST_MASK            (((1U << DMA_INTST_CH3_TC_INTST_WIDTH) - 1U) << DMA_INTST_CH3_TC_INTST_SHIFT)
#define DMA_INTST_CH3_TC_INTST_VALUE_NOT_SET   0U
#define DMA_INTST_CH3_TC_INTST_BITS_NOT_SET    (DMA_INTST_CH3_TC_INTST_VALUE_NOT_SET << DMA_INTST_CH3_TC_INTST_SHIFT)
#define DMA_INTST_CH3_TC_INTST_VALUE_SET       1U
#define DMA_INTST_CH3_TC_INTST_BITS_SET        (DMA_INTST_CH3_TC_INTST_VALUE_SET << DMA_INTST_CH3_TC_INTST_SHIFT)

#define DMA_INTST_CH0_THC_INTST_SHIFT          8
#define DMA_INTST_CH0_THC_INTST_WIDTH          1
#define DMA_INTST_CH0_THC_INTST_MASK           (((1U << DMA_INTST_CH0_THC_INTST_WIDTH) - 1U) << DMA_INTST_CH0_THC_INTST_SHIFT)
#define DMA_INTST_CH0_THC_INTST_VALUE_NOT_SET  0U
#define DMA_INTST_CH0_THC_INTST_BITS_NOT_SET   (DMA_INTST_CH0_THC_INTST_VALUE_NOT_SET << DMA_INTST_CH0_THC_INTST_SHIFT)
#define DMA_INTST_CH0_THC_INTST_VALUE_SET      1U
#define DMA_INTST_CH0_THC_INTST_BITS_SET       (DMA_INTST_CH0_THC_INTST_VALUE_SET << DMA_INTST_CH0_THC_INTST_SHIFT)

#define DMA_INTST_CH1_THC_INTST_SHIFT          9
#define DMA_INTST_CH1_THC_INTST_WIDTH          1
#define DMA_INTST_CH1_THC_INTST_MASK           (((1U << DMA_INTST_CH1_THC_INTST_WIDTH) - 1U) << DMA_INTST_CH1_THC_INTST_SHIFT)
#define DMA_INTST_CH1_THC_INTST_VALUE_NOT_SET  0U
#define DMA_INTST_CH1_THC_INTST_BITS_NOT_SET   (DMA_INTST_CH1_THC_INTST_VALUE_NOT_SET << DMA_INTST_CH1_THC_INTST_SHIFT)
#define DMA_INTST_CH1_THC_INTST_VALUE_SET      1U
#define DMA_INTST_CH1_THC_INTST_BITS_SET       (DMA_INTST_CH1_THC_INTST_VALUE_SET << DMA_INTST_CH1_THC_INTST_SHIFT)

#define DMA_INTST_CH2_THC_INTST_SHIFT          10
#define DMA_INTST_CH2_THC_INTST_WIDTH          1
#define DMA_INTST_CH2_THC_INTST_MASK           (((1U << DMA_INTST_CH2_THC_INTST_WIDTH) - 1U) << DMA_INTST_CH2_THC_INTST_SHIFT)
#define DMA_INTST_CH2_THC_INTST_VALUE_NOT_SET  0U
#define DMA_INTST_CH2_THC_INTST_BITS_NOT_SET   (DMA_INTST_CH2_THC_INTST_VALUE_NOT_SET << DMA_INTST_CH2_THC_INTST_SHIFT)
#define DMA_INTST_CH2_THC_INTST_VALUE_SET      1U
#define DMA_INTST_CH2_THC_INTST_BITS_SET       (DMA_INTST_CH2_THC_INTST_VALUE_SET << DMA_INTST_CH2_THC_INTST_SHIFT)

#define DMA_INTST_CH3_THC_INTST_SHIFT          11
#define DMA_INTST_CH3_THC_INTST_WIDTH          1
#define DMA_INTST_CH3_THC_INTST_MASK           (((1U << DMA_INTST_CH3_THC_INTST_WIDTH) - 1U) << DMA_INTST_CH3_THC_INTST_SHIFT)
#define DMA_INTST_CH3_THC_INTST_VALUE_NOT_SET  0U
#define DMA_INTST_CH3_THC_INTST_BITS_NOT_SET   (DMA_INTST_CH3_THC_INTST_VALUE_NOT_SET << DMA_INTST_CH3_THC_INTST_SHIFT)
#define DMA_INTST_CH3_THC_INTST_VALUE_SET      1U
#define DMA_INTST_CH3_THC_INTST_BITS_SET       (DMA_INTST_CH3_THC_INTST_VALUE_SET << DMA_INTST_CH3_THC_INTST_SHIFT)

/* -------- DMA_CH0 -------- */
#define DMA_CH0_BASE_ADDR                      0x40001100U
#define DMA_CH0_BASE_SIZE                      0x00000020U
#define DMA_CH0                                ((volatile DMA_Channel_t *)DMA_CH0_BASE_ADDR)

/* -------- DMA_CH1 -------- */
#define DMA_CH1_BASE_ADDR                      0x40001120U
#define DMA_CH1_BASE_SIZE                      0x00000020U
#define DMA_CH1                                ((volatile DMA_Channel_t *)DMA_CH1_BASE_ADDR)

/* -------- DMA_CH2 -------- */
#define DMA_CH2_BASE_ADDR                      0x40001140U
#define DMA_CH2_BASE_SIZE                      0x00000020U
#define DMA_CH2                                ((volatile DMA_Channel_t *)DMA_CH2_BASE_ADDR)

/* -------- DMA_CH3 -------- */
#define DMA_CH3_BASE_ADDR                      0x40001160U
#define DMA_CH3_BASE_SIZE                      0x00000020U
#define DMA_CH3                                ((volatile DMA_Channel_t *)DMA_CH3_BASE_ADDR)

/* -------- DMA_CH -------- */

typedef struct {
	uint32_t CTR;
	uint32_t MOD;
	uint32_t MSADDR;
	uint32_t MDADDR;
	uint32_t ST;
} DMA_Channel_t;

#define DMA_CH_CTR_CH_EN_SHIFT                 0
#define DMA_CH_CTR_CH_EN_WIDTH                 1
#define DMA_CH_CTR_CH_EN_MASK                  (((1U << DMA_CH_CTR_CH_EN_WIDTH) - 1U) << DMA_CH_CTR_CH_EN_SHIFT)
#define DMA_CH_CTR_CH_EN_VALUE_DISABLE         0U
#define DMA_CH_CTR_CH_EN_BITS_DISABLE          (DMA_CH_CTR_CH_EN_VALUE_DISABLE << DMA_CH_CTR_CH_EN_SHIFT)
#define DMA_CH_CTR_CH_EN_VALUE_ENABLE          1U
#define DMA_CH_CTR_CH_EN_BITS_ENABLE           (DMA_CH_CTR_CH_EN_VALUE_ENABLE << DMA_CH_CTR_CH_EN_SHIFT)

#define DMA_CH_CTR_LENGTH_SHIFT                1
#define DMA_CH_CTR_LENGTH_WIDTH                12
#define DMA_CH_CTR_LENGTH_MASK                 (((1U << DMA_CH_CTR_LENGTH_WIDTH) - 1U) << DMA_CH_CTR_LENGTH_SHIFT)
#define DMA_CH_CTR_LOOP_SHIFT                  13
#define DMA_CH_CTR_LOOP_WIDTH                  1
#define DMA_CH_CTR_LOOP_MASK                   (((1U << DMA_CH_CTR_LOOP_WIDTH) - 1U) << DMA_CH_CTR_LOOP_SHIFT)
#define DMA_CH_CTR_LOOP_VALUE_DISABLE          0U
#define DMA_CH_CTR_LOOP_BITS_DISABLE           (DMA_CH_CTR_LOOP_VALUE_DISABLE << DMA_CH_CTR_LOOP_SHIFT)
#define DMA_CH_CTR_LOOP_VALUE_ENABLE           1U
#define DMA_CH_CTR_LOOP_BITS_ENABLE            (DMA_CH_CTR_LOOP_VALUE_ENABLE << DMA_CH_CTR_LOOP_SHIFT)

#define DMA_CH_CTR_PRI_SHIFT                   14
#define DMA_CH_CTR_PRI_WIDTH                   2
#define DMA_CH_CTR_PRI_MASK                    (((1U << DMA_CH_CTR_PRI_WIDTH) - 1U) << DMA_CH_CTR_PRI_SHIFT)
#define DMA_CH_CTR_PRI_VALUE_LOW               0U
#define DMA_CH_CTR_PRI_BITS_LOW                (DMA_CH_CTR_PRI_VALUE_LOW << DMA_CH_CTR_PRI_SHIFT)
#define DMA_CH_CTR_PRI_VALUE_MEDIUM            1U
#define DMA_CH_CTR_PRI_BITS_MEDIUM             (DMA_CH_CTR_PRI_VALUE_MEDIUM << DMA_CH_CTR_PRI_SHIFT)
#define DMA_CH_CTR_PRI_VALUE_HIGH              2U
#define DMA_CH_CTR_PRI_BITS_HIGH               (DMA_CH_CTR_PRI_VALUE_HIGH << DMA_CH_CTR_PRI_SHIFT)
#define DMA_CH_CTR_PRI_VALUE_HIGHEST           3U
#define DMA_CH_CTR_PRI_BITS_HIGHEST            (DMA_CH_CTR_PRI_VALUE_HIGHEST << DMA_CH_CTR_PRI_SHIFT)

#define DMA_CH_CTR_SWREQ_SHIFT                 16
#define DMA_CH_CTR_SWREQ_WIDTH                 1
#define DMA_CH_CTR_SWREQ_MASK                  (((1U << DMA_CH_CTR_SWREQ_WIDTH) - 1U) << DMA_CH_CTR_SWREQ_SHIFT)
#define DMA_CH_CTR_SWREQ_VALUE_SET             1U
#define DMA_CH_CTR_SWREQ_BITS_SET              (DMA_CH_CTR_SWREQ_VALUE_SET << DMA_CH_CTR_SWREQ_SHIFT)

#define DMA_CH_MOD_MS_ADDMOD_SHIFT             0
#define DMA_CH_MOD_MS_ADDMOD_WIDTH             1
#define DMA_CH_MOD_MS_ADDMOD_MASK              (((1U << DMA_CH_MOD_MS_ADDMOD_WIDTH) - 1U) << DMA_CH_MOD_MS_ADDMOD_SHIFT)
#define DMA_CH_MOD_MS_ADDMOD_VALUE_NONE        0U
#define DMA_CH_MOD_MS_ADDMOD_BITS_NONE         (DMA_CH_MOD_MS_ADDMOD_VALUE_NONE << DMA_CH_MOD_MS_ADDMOD_SHIFT)
#define DMA_CH_MOD_MS_ADDMOD_VALUE_INCREMENT   1U
#define DMA_CH_MOD_MS_ADDMOD_BITS_INCREMENT    (DMA_CH_MOD_MS_ADDMOD_VALUE_INCREMENT << DMA_CH_MOD_MS_ADDMOD_SHIFT)

#define DMA_CH_MOD_MS_SIZE_SHIFT               1
#define DMA_CH_MOD_MS_SIZE_WIDTH               2
#define DMA_CH_MOD_MS_SIZE_MASK                (((1U << DMA_CH_MOD_MS_SIZE_WIDTH) - 1U) << DMA_CH_MOD_MS_SIZE_SHIFT)
#define DMA_CH_MOD_MS_SIZE_VALUE_8BIT          0U
#define DMA_CH_MOD_MS_SIZE_BITS_8BIT           (DMA_CH_MOD_MS_SIZE_VALUE_8BIT << DMA_CH_MOD_MS_SIZE_SHIFT)
#define DMA_CH_MOD_MS_SIZE_VALUE_16BIT         1U
#define DMA_CH_MOD_MS_SIZE_BITS_16BIT          (DMA_CH_MOD_MS_SIZE_VALUE_16BIT << DMA_CH_MOD_MS_SIZE_SHIFT)
#define DMA_CH_MOD_MS_SIZE_VALUE_32BIT         2U
#define DMA_CH_MOD_MS_SIZE_BITS_32BIT          (DMA_CH_MOD_MS_SIZE_VALUE_32BIT << DMA_CH_MOD_MS_SIZE_SHIFT)
#define DMA_CH_MOD_MS_SIZE_VALUE_KEEP          3U
#define DMA_CH_MOD_MS_SIZE_BITS_KEEP           (DMA_CH_MOD_MS_SIZE_VALUE_KEEP << DMA_CH_MOD_MS_SIZE_SHIFT)

#define DMA_CH_MOD_MS_SEL_SHIFT                3
#define DMA_CH_MOD_MS_SEL_WIDTH                3
#define DMA_CH_MOD_MS_SEL_MASK                 (((1U << DMA_CH_MOD_MS_SEL_WIDTH) - 1U) << DMA_CH_MOD_MS_SEL_SHIFT)
#define DMA_CH_MOD_MS_SEL_VALUE_SRAM           0U
#define DMA_CH_MOD_MS_SEL_BITS_SRAM            (DMA_CH_MOD_MS_SEL_VALUE_SRAM << DMA_CH_MOD_MS_SEL_SHIFT)
#define DMA_CH_MOD_MS_SEL_VALUE_HSREQ_MS0      1U
#define DMA_CH_MOD_MS_SEL_BITS_HSREQ_MS0       (DMA_CH_MOD_MS_SEL_VALUE_HSREQ_MS0 << DMA_CH_MOD_MS_SEL_SHIFT)
#define DMA_CH_MOD_MS_SEL_VALUE_HSREQ_MS1      2U
#define DMA_CH_MOD_MS_SEL_BITS_HSREQ_MS1       (DMA_CH_MOD_MS_SEL_VALUE_HSREQ_MS1 << DMA_CH_MOD_MS_SEL_SHIFT)
#define DMA_CH_MOD_MS_SEL_VALUE_HSREQ_MS2      3U
#define DMA_CH_MOD_MS_SEL_BITS_HSREQ_MS2       (DMA_CH_MOD_MS_SEL_VALUE_HSREQ_MS2 << DMA_CH_MOD_MS_SEL_SHIFT)
#define DMA_CH_MOD_MS_SEL_VALUE_HSREQ_MS3      4U
#define DMA_CH_MOD_MS_SEL_BITS_HSREQ_MS3       (DMA_CH_MOD_MS_SEL_VALUE_HSREQ_MS3 << DMA_CH_MOD_MS_SEL_SHIFT)
#define DMA_CH_MOD_MS_SEL_VALUE_HSREQ_MS4      5U
#define DMA_CH_MOD_MS_SEL_BITS_HSREQ_MS4       (DMA_CH_MOD_MS_SEL_VALUE_HSREQ_MS4 << DMA_CH_MOD_MS_SEL_SHIFT)
#define DMA_CH_MOD_MS_SEL_VALUE_HSREQ_MS5      6U
#define DMA_CH_MOD_MS_SEL_BITS_HSREQ_MS5       (DMA_CH_MOD_MS_SEL_VALUE_HSREQ_MS5 << DMA_CH_MOD_MS_SEL_SHIFT)
#define DMA_CH_MOD_MS_SEL_VALUE_HSREQ_MS6      7U
#define DMA_CH_MOD_MS_SEL_BITS_HSREQ_MS6       (DMA_CH_MOD_MS_SEL_VALUE_HSREQ_MS6 << DMA_CH_MOD_MS_SEL_SHIFT)

#define DMA_CH_MOD_MD_ADDMOD_SHIFT             8
#define DMA_CH_MOD_MD_ADDMOD_WIDTH             1
#define DMA_CH_MOD_MD_ADDMOD_MASK              (((1U << DMA_CH_MOD_MD_ADDMOD_WIDTH) - 1U) << DMA_CH_MOD_MD_ADDMOD_SHIFT)
#define DMA_CH_MOD_MD_ADDMOD_VALUE_NONE        0U
#define DMA_CH_MOD_MD_ADDMOD_BITS_NONE         (DMA_CH_MOD_MD_ADDMOD_VALUE_NONE << DMA_CH_MOD_MD_ADDMOD_SHIFT)
#define DMA_CH_MOD_MD_ADDMOD_VALUE_INCREMENT   1U
#define DMA_CH_MOD_MD_ADDMOD_BITS_INCREMENT    (DMA_CH_MOD_MD_ADDMOD_VALUE_INCREMENT << DMA_CH_MOD_MD_ADDMOD_SHIFT)

#define DMA_CH_MOD_MD_SIZE_SHIFT               9
#define DMA_CH_MOD_MD_SIZE_WIDTH               2
#define DMA_CH_MOD_MD_SIZE_MASK                (((1U << DMA_CH_MOD_MD_SIZE_WIDTH) - 1U) << DMA_CH_MOD_MD_SIZE_SHIFT)
#define DMA_CH_MOD_MD_SIZE_VALUE_8BIT          0U
#define DMA_CH_MOD_MD_SIZE_BITS_8BIT           (DMA_CH_MOD_MD_SIZE_VALUE_8BIT << DMA_CH_MOD_MD_SIZE_SHIFT)
#define DMA_CH_MOD_MD_SIZE_VALUE_16BIT         1U
#define DMA_CH_MOD_MD_SIZE_BITS_16BIT          (DMA_CH_MOD_MD_SIZE_VALUE_16BIT << DMA_CH_MOD_MD_SIZE_SHIFT)
#define DMA_CH_MOD_MD_SIZE_VALUE_32BIT         2U
#define DMA_CH_MOD_MD_SIZE_BITS_32BIT          (DMA_CH_MOD_MD_SIZE_VALUE_32BIT << DMA_CH_MOD_MD_SIZE_SHIFT)
#define DMA_CH_MOD_MD_SIZE_VALUE_KEEP          3U
#define DMA_CH_MOD_MD_SIZE_BITS_KEEP           (DMA_CH_MOD_MD_SIZE_VALUE_KEEP << DMA_CH_MOD_MD_SIZE_SHIFT)

#define DMA_CH_MOD_MD_SEL_SHIFT                11
#define DMA_CH_MOD_MD_SEL_WIDTH                3
#define DMA_CH_MOD_MD_SEL_MASK                 (((1U << DMA_CH_MOD_MD_SEL_WIDTH) - 1U) << DMA_CH_MOD_MD_SEL_SHIFT)
#define DMA_CH_MOD_MD_SEL_VALUE_SRAM           0U
#define DMA_CH_MOD_MD_SEL_BITS_SRAM            (DMA_CH_MOD_MD_SEL_VALUE_SRAM << DMA_CH_MOD_MD_SEL_SHIFT)
#define DMA_CH_MOD_MD_SEL_VALUE_HSREQ_MS0      1U
#define DMA_CH_MOD_MD_SEL_BITS_HSREQ_MS0       (DMA_CH_MOD_MD_SEL_VALUE_HSREQ_MS0 << DMA_CH_MOD_MD_SEL_SHIFT)
#define DMA_CH_MOD_MD_SEL_VALUE_HSREQ_MS1      2U
#define DMA_CH_MOD_MD_SEL_BITS_HSREQ_MS1       (DMA_CH_MOD_MD_SEL_VALUE_HSREQ_MS1 << DMA_CH_MOD_MD_SEL_SHIFT)
#define DMA_CH_MOD_MD_SEL_VALUE_HSREQ_MS2      3U
#define DMA_CH_MOD_MD_SEL_BITS_HSREQ_MS2       (DMA_CH_MOD_MD_SEL_VALUE_HSREQ_MS2 << DMA_CH_MOD_MD_SEL_SHIFT)
#define DMA_CH_MOD_MD_SEL_VALUE_HSREQ_MS3      4U
#define DMA_CH_MOD_MD_SEL_BITS_HSREQ_MS3       (DMA_CH_MOD_MD_SEL_VALUE_HSREQ_MS3 << DMA_CH_MOD_MD_SEL_SHIFT)
#define DMA_CH_MOD_MD_SEL_VALUE_HSREQ_MS4      5U
#define DMA_CH_MOD_MD_SEL_BITS_HSREQ_MS4       (DMA_CH_MOD_MD_SEL_VALUE_HSREQ_MS4 << DMA_CH_MOD_MD_SEL_SHIFT)
#define DMA_CH_MOD_MD_SEL_VALUE_HSREQ_MS5      6U
#define DMA_CH_MOD_MD_SEL_BITS_HSREQ_MS5       (DMA_CH_MOD_MD_SEL_VALUE_HSREQ_MS5 << DMA_CH_MOD_MD_SEL_SHIFT)
#define DMA_CH_MOD_MD_SEL_VALUE_HSREQ_MS6      7U
#define DMA_CH_MOD_MD_SEL_BITS_HSREQ_MS6       (DMA_CH_MOD_MD_SEL_VALUE_HSREQ_MS6 << DMA_CH_MOD_MD_SEL_SHIFT)


#endif

