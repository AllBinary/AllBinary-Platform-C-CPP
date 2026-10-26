
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
        



            #include <vector>
        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AngleFactory.h"
#include "AngleIncrementInfo.h"

class AngleIncrementInfoFactory
            : public Object
         {

    private: static AngleIncrementInfoFactory instance() { return AngleIncrementInfoFactory(); }

    public: static AngleIncrementInfoFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AngleIncrementInfoFactory::instance();
    
}


    private: const std::vector<AngleIncrementInfo> angleIncrementInfo = std::vector<AngleIncrementInfo>(static_cast<int32_t>(AngleFactory::getInstance().TOTAL_ANGLE));

    public: AngleIncrementInfo getAt(int16_t angleIncrement){

    int32_t halfAngleIncrement = (static_cast<int32_t>(angleIncrement)>>1);;
    

    AngleIncrementInfo angleIncrementInfo;;
    

    AngleIncrementInfo angleIncrementInfoCanBeNull = this->angleIncrementInfo[halfAngleIncrement];;
    

                        if(angleIncrementInfoCanBeNull == 
                                    nullptr
                                )
                        
                                    {
                                    angleIncrementInfo= AngleIncrementInfo(angleIncrement);
    
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


};

            

