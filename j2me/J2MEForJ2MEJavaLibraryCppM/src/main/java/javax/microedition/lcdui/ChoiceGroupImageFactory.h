
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
        



        #ifndef JAVAX_MICROEDITION_LCDUI_CHOICEGROUPIMAGEFACTORY_H
        #define JAVAX_MICROEDITION_LCDUI_CHOICEGROUPIMAGEFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class Image;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ChoiceGroupImageFactory
            : public virtual Object
         {

    private: static ChoiceGroupImageFactory* instance_owner();
    private: static ChoiceGroupImageFactory* instance;

    public: static ChoiceGroupImageFactory* getInstance();


            
    public: ChoiceGroupImageFactory();
        
    private: std::vector<int8_t> multiOff;

    private: std::vector<int8_t> multiOn;

    private: std::vector<int8_t> radioOff;

    private: std::vector<int8_t> radioOn;

    private: Image* imgMultiOffO;

    private: Image* imgMultiOnO;

    private: Image* imgRadioOffO;

    private: Image* imgRadioOnO;

    public: Image* imgMultiOff;

    public: Image* imgMultiOn;

    public: Image* imgRadioOff;

    public: Image* imgRadioOn;

    private: std::vector<Image*> imageArray;

    public: std::vector<Image*> getImageArray();

    public: void init(std::vector<Image*> imageArray);

};

            


        #endif //JAVAX_MICROEDITION_LCDUI_CHOICEGROUPIMAGEFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(JAVAX_MICROEDITION_LCDUI_CHOICEGROUPIMAGEFACTORY_H_COMPLETE)
        #define JAVAX_MICROEDITION_LCDUI_CHOICEGROUPIMAGEFACTORY_H_COMPLETE
        #if __has_include("javax/microedition/lcdui/Image.h")
#include "javax/microedition/lcdui/Image.h"
#endif

        #endif
    
