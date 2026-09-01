
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2022 AllBinary
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
        
            #include "../../../../../java/lang/Object.h"
        
#include <org/allbinary/game/paint/AboutPaintable.h>

      
#include <org/allbinary/graphics/paint/NullPaintable.h>

      
#include <org/allbinary/graphics/paint/Paintable.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AboutPaintableFactory
            : public Object
         {

    private: static AboutPaintableFactory instance() { return AboutPaintableFactory(); }

    public: static AboutPaintableFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AboutPaintableFactory::instance();
    
}


private: AboutPaintableFactory(){

    std::vector<std::string> INFO = 
                                                        {
                                                            "Built with the","AllBinary Platform",StringUtil::getInstance().EMPTY_STRING,"Comments or Questions:","support@allbinary.com"
                                                        };;
    

    std::vector<std::string> DEVELOPERS = 
                                                        {
                                                            "Developed By:","Travis Berthelot"
                                                        };;
    
this->paintableArray= AboutPaintable::getInstance(INFO, DEVELOPERS).getPaintableArrayInstance();
    
}


    public: std::vector<Paintable> paintableArray = 
                                                {
                                                    NullPaintable::getInstance()
                                                };

};

            

