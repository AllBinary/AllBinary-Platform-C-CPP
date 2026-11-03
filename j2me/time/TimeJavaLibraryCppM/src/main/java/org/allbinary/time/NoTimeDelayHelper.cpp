
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
        



        #ifndef ORG_ALLBINARY_TIME_NOTIMEDELAYHELPER_CPP
        #define ORG_ALLBINARY_TIME_NOTIMEDELAYHELPER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/time/NoTimeDelayHelper.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/time/TimeDelayHelper.h"

auto NoTimeDelayHelper::SINGLETON_owner() -> NoTimeDelayHelper* { static std::unique_ptr<NoTimeDelayHelper> value(new NoTimeDelayHelper()); return value.get(); }
NoTimeDelayHelper* NoTimeDelayHelper::SINGLETON = NoTimeDelayHelper::SINGLETON_owner();

NoTimeDelayHelper::NoTimeDelayHelper() : TimeDelayHelper(0){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    auto NoTimeDelayHelper::isTimeTNT() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    
}


    auto NoTimeDelayHelper::isTimeSinceTNT(int32_t delay) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    
}


    auto NoTimeDelayHelper::isTime(int64_t currentTime) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    
}


    auto NoTimeDelayHelper::isTimeSince(int32_t delay, int64_t currentTime) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    
}




        #endif //ORG_ALLBINARY_TIME_NOTIMEDELAYHELPER_CPP
