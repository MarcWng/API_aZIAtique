/*
** EPITECH PROJECT, 2022
** API_aZIAtique
** File description:
** Export
*/

#ifndef EXPORT_HPP_
#define EXPORT_HPP_

#if defined(WIN32)
    #define AZIAT_API_EXP __declspec(dllexport)
    #define AZIAT_API_IMP __declspec(dllimport)
    #ifdef _MSC_VER
        #pragma warning(disable: 4251)
    #endif
#else
    #if __GNUC__ >= 4
        #define AZIAT_API_EXP __attribute__ ((__visibility__ ("default")))
        #define AZIAT_API_IMP __attribute__ ((__visibility__ ("default")))
    #else
        #define AZIAT_API_EXP
        #define AZIAT_API_IMP
    #endif
#endif

#if defined(AZIAT_EXPORTS)
    #define AZIAT_SHARED_API AZIAT_API_EXP
#else
    #define AZIAT_SHARED_API AZIAT_API_IMP
#endif



#endif /* !EXPORT_HPP_ */