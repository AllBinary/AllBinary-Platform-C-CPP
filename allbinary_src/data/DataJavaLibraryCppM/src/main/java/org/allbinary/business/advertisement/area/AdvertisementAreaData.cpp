
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
        



            #include "../../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AdvertisementAreaData
            : public Object
         {
        

    private: static const instance: AdvertisementAreaData = new AdvertisementAreaData();

    public static AdvertisementAreaData getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AdvertisementAreaData.instance;
    
}


private constructor (){

            super();
        }


    public const NAME: string = "ADVERTISEMENT_NAME";

    public const DESCRIPTION: string = "ADVERTISEMENT_DESCRIPTION";

    public const CONSTRAINTS: string = "ADVERTISEMENT_CONSTRAINTS";

};

            

