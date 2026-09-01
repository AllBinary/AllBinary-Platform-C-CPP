
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
                *  
                *  By agreeing to this license you and any business entity you represent are
                *  legally bound to the AllBinary Open License Version 1 legal agreement.
                *  
                *  You may obtain the AllBinary Open License Version 1 legal agreement from
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository.
                *  
                *  Created By: Travis Berthelot  
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_TIME_NOTIMEDELAYHELPER_H
        #define ORG_ALLBINARY_TIME_NOTIMEDELAYHELPER_H

















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TimeDelayHelper.h"

class NoTimeDelayHelper: public TimeDelayHelper {

    public: static const NoTimeDelayHelper SINGLETON = NoTimeDelayHelper();

public: NoTimeDelayHelper();

    public: bool isTimeTNT();

    public: bool isTimeSinceTNT(int32_t delay);

    public: bool isTime(int64_t currentTime);

    public: bool isTimeSince(int32_t delay, int64_t currentTime);

};

            


        #endif //ORG_ALLBINARY_TIME_NOTIMEDELAYHELPER_H
