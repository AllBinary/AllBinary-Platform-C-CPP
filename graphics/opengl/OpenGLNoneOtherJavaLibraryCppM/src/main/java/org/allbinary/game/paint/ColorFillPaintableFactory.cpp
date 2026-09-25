
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
        



            #include "../../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/logic/system/os/GenericOperatingSystem.h>

      
#include <org/allbinary/logic/system/os/OperatingSystemFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ColorFillPaintable.h"
#include "OverScanColorFillPaintable.h"
#include "ColorFillBasePaintable.h"

class ColorFillPaintableFactory
            : public Object
         {

    private: static ColorFillPaintableFactory instance() { return ColorFillPaintableFactory(); }

    public: static ColorFillPaintableFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ColorFillPaintableFactory::instance();
    
}


    public: ColorFillBasePaintable getInstance(BasicColor basicColor, bool forThreedCanvas){

    GenericOperatingSystem operatingSystem = OperatingSystemFactory::getInstance().getOperatingSystemInstance();;
    

                        if(operatingSystem.isOverScan())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return OverScanColorFillPaintable(basicColor);
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ColorFillPaintable(basicColor);
    

                        }
                            
}


};

            

