//
//  ManoProcessor.h
//  ManoSDK
//
//  Created by Julio on 23/04/18.
//  Copyright © 2016 ManoMotion. All rights reserved.
//

#ifndef entry_point_iOS
#define entry_point_iOS

#include "public_structs.h"

#define ENTRY_POINT __attribute__ ((visibility ("default")))

extern "C"  {
    
    ENTRY_POINT void init(ManoSettings mano_settings, LicenseStatus* license_status);
    
    ENTRY_POINT void processFrame(HandInfo *hand_info0,   Session *manomotion_session);
    
    ENTRY_POINT void processFrameTwoHands(HandInfo *hand_info0,HandInfo *hand_info1,   Session *manomotion_session);

    ENTRY_POINT void  setFrameArray (void * data);
    
    ENTRY_POINT void  setMRFrameArray (void * data);

    ENTRY_POINT void  setResolution(int width, int height);
    
    ENTRY_POINT void  stop();

}
#endif /* ManoProcessor_h */
