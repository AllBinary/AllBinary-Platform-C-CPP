
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
        



        #ifndef ORG_ALLBINARY_MATH_ANGLEINCREMENTINFOFACTORY_CPP
        #define ORG_ALLBINARY_MATH_ANGLEINCREMENTINFOFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/math/AngleIncrementInfoFactory.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/math/AngleFactory.h"
#include "org/allbinary/math/AngleIncrementInfo.h"


AngleIncrementInfoFactory::AngleIncrementInfoFactory() : angleIncrementInfo(std::vector<AngleIncrementInfo*>(static_cast<int32_t>(AngleFactory::getInstance()->TOTAL_ANGLE))) {
        }
        auto AngleIncrementInfoFactory::instance_owner() -> AngleIncrementInfoFactory* { static std::unique_ptr<AngleIncrementInfoFactory> value(new AngleIncrementInfoFactory()); return value.get(); }
AngleIncrementInfoFactory* AngleIncrementInfoFactory::instance = AngleIncrementInfoFactory::instance_owner();

    auto AngleIncrementInfoFactory::getInstance() -> AngleIncrementInfoFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AngleIncrementInfoFactory::instance;
    
}


    auto AngleIncrementInfoFactory::getAt(int16_t angleIncrement) -> AngleIncrementInfo*{

    int32_t halfAngleIncrement = (static_cast<int32_t>(angleIncrement)>>1);;
    

    AngleIncrementInfo* angleIncrementInfo;;
    

    AngleIncrementInfo* angleIncrementInfoCanBeNull = this->angleIncrementInfo[halfAngleIncrement];;
    

                        if(angleIncrementInfoCanBeNull == 
                                    nullptr
                                )
                        
                                    {
                                    angleIncrementInfo= new AngleIncrementInfo(angleIncrement);
    
this->angleIncrementInfo[halfAngleIncrement]= angleIncrementInfo;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return angleIncrementInfo;
    

                                    }
                                
                        else {
                            angleIncrementInfo= angleIncrementInfoCanBeNull;
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return angleIncrementInfo;
    
}




        #endif //ORG_ALLBINARY_MATH_ANGLEINCREMENTINFOFACTORY_CPP
