
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
        
            #include "../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../java/lang/Integer.h"
        
#include <java/awt/image/BufferedImage.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "MeteredGameObject.h"
#include "MagicGameObjectInterface.h"

class MagicGameObject: public MeteredGameObject, public MagicGameObjectInterface {

    private: const std::string MP_LABEL = "MP:";

public: MagicGameObject(std::vector<BufferedImage> bufferedImage, Integer minX, Integer maxX, Integer y){
            super(bufferedImage, minX, maxX, y);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public: std::string toString(){

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append(CommonSeps::getInstance().NEW_LINE);
    
stringBuffer.append(this->MP_LABEL);
    
stringBuffer.append(super.toString());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer.toString();;
    
}


};

            

