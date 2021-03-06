/**
 *
 * Copyright (c) 2012-2018 Microchip Technology Inc. and its subsidiaries.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Subject to your compliance with these terms, you may use Microchip
 * software and any derivatives exclusively with Microchip products.
 * It is your responsibility to comply with third party license terms applicable
 * to your use of third party software (including open source software) that
 * may accompany Microchip software.
 *
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES,
 * WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE,
 * INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY,
 * AND FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT WILL MICROCHIP BE
 * LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, INCIDENTAL OR CONSEQUENTIAL
 * LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND WHATSOEVER RELATED TO THE
 * SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS BEEN ADVISED OF THE
 * POSSIBILITY OR THE DAMAGES ARE FORESEEABLE.  TO THE FULLEST EXTENT
 * ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN ANY WAY
 * RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
 * THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 * \asf_license_stop
 *
 */
/*!
 * \defgroup group_dsplib_serialscope Serial Scope
 * \ingroup group_dsplib_tools
 * \brief This script is used to visualize a data stream from the serial port formatted as follow:
 * \code 0.265445
	-0.025633
	... \endcode
 * \image html scope.gif
 * This script is a combination of two main programs (\ref group_dsplib_dataget and \ref group_dsplib_dataprint)
 *
 * \section usage Usage
 * \code scope [-port portname] [-speed baudrate] \endcode
 * - The \b -port portname argument is used to set the name of the port used to receive data.
 * - The \b -speed baudrate argument fixed the speed of the communication.
 *
 * You can also directly modify two parameters in the script:
 * - \b COM_PORT: the serial port identifier used (i.e.: COM1).
 * - \b COM_BAUDRATE: the baud rate of the transmission (i.e.: 9600).
 *
 * Once launched, the script will wait until a reset has been performed on the target
 * (which means it will wait until the beginning of the transmission to be sure data are well synchronized).
 *
 * \section information Information
 * All the files related to this module are located under /avr32/services/dsp/dsplib/utils/scripts/serial_scope\n
 */
/*
 * Support and FAQ: visit <a href="https://www.microchip.com/support/">Microchip Support</a>
 */
