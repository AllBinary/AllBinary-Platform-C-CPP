
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GAME_METEREDGAMEOBJECT_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GAME_METEREDGAMEOBJECT_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
            #include "java/lang/Double.h"
        
#include <java/awt/image/BufferedImage.h>
class StringMaker;
class CommonSeps;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/module/game/MeteredGameObjectInterface.h"
class GraphicsAnalysisUtil;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class MeteredGameObject
            : public virtual Object
        , public virtual MeteredGameObjectInterface {

    private: std::vector<double> ratios;

    private: bool good = false;

    private: bool dropping = false;

    private: int32_t minX;

    private: int32_t maxX;

    private: int32_t y;

    private: int32_t size;

    private: const std::string RATIOS_LABEL = "Ratios: ";

    private: const std::string IS_GOOD_LABEL = "isGood: ";

    private: const std::string IS_DROPPPING_LABEL = "isDropping: ";

public: MeteredGameObject(std::vector<BufferedImage*> bufferedImage, int32_t minX, int32_t maxX, int32_t y);

    public: bool isGood();

    /*protected*/ public: void setGood(bool good);

    public: bool isDropping();

    /*protected*/ public: void setDropping(bool dropping);

    public: std::vector<double> getRatios();

    public: std::string toString();

    public: void setRatios(std::vector<double> ratios);

    public: int32_t getMinX();

    public: void setMinX(int32_t minX);

    public: int32_t getMaxX();

    public: void setMaxX(int32_t maxX);

    public: int32_t getY();

    public: void setY(int32_t y);

    public: int32_t getSize();

    public: void setSize(int32_t size);

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GAME_METEREDGAMEOBJECT_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GAME_METEREDGAMEOBJECT_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GAME_METEREDGAMEOBJECT_H_COMPLETE
        #if __has_include(<java/awt/image/BufferedImage.h>)
#include <java/awt/image/BufferedImage.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include("org/allbinary/input/automation/module/game/MeteredGameObjectInterface.h")
#include "org/allbinary/input/automation/module/game/MeteredGameObjectInterface.h"
#endif
#if __has_include("org/allbinary/input/automation/module/game/GraphicsAnalysisUtil.h")
#include "org/allbinary/input/automation/module/game/GraphicsAnalysisUtil.h"
#endif

        #endif
    
