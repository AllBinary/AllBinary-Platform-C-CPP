
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
        



            #include "../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AngleFactory.h"
#include "AngleIncrementInfo.h"

class AngleIncrementInfoFactory
            : public Object
         {
        

    private: static const instance: AngleIncrementInfoFactory = new AngleIncrementInfoFactory();

    public static AngleIncrementInfoFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AngleIncrementInfoFactory.instance;
    
}


    private: const angleIncrementInfo: std::vector<AngleIncrementInfo> = new Array(static_cast<int32_t>(AngleFactory.getInstance()!.TOTAL_ANGLE));

    public AngleIncrementInfo getAt(int16_t angleIncrement){

    halfAngleIncrement: int32_t = (static_cast<int32_t>(angleIncrement)>>1);;
    

    angleIncrementInfoCanBeNull: AngleIncrementInfo = this.angleIncrementInfo[halfAngleIncrement];;
    

                        if(angleIncrementInfoCanBeNull == 
                                    null
                                )
                        
                                    {
                                    angleIncrementInfoCanBeNull= new AngleIncrementInfo(angleIncrement);
    
this.angleIncrementInfo[halfAngleIncrement]= angleIncrementInfoCanBeNull;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return angleIncrementInfoCanBeNull;
    
}


};

            

