
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

            #include <vector>
        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
            #include "java/lang/Double.h"
        
#include <java/awt/image/BufferedImage.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "MeteredGameObjectInterface.h"
#include "GraphicsAnalysisUtil.h"

class MeteredGameObject
            : public Object
        : public MeteredGameObjectInterface {

    private: std::vector<number> ratios;

    private: bool good = false;

    private: bool dropping = false;

    private: Integer minX;

    private: Integer maxX;

    private: Integer y;

    private: Integer size;

    private: const std::string RATIOS_LABEL = "Ratios: ";

    private: const std::string IS_GOOD_LABEL = "isGood: ";

    private: const std::string IS_DROPPPING_LABEL = "isDropping: ";

public: MeteredGameObject(std::vector<BufferedImage> bufferedImage, Integer minX, Integer maxX, Integer y);

    public: bool isGood();

    protected: void setGood(bool good);

    public: bool isDropping();

    protected: void setDropping(bool dropping);

    public: std::vector<number> getRatios();

    public: std::string toString();

    public: void setRatios(std::vector<number> ratios);

    public: Integer getMinX();

    public: void setMinX(Integer minX);

    public: Integer getMaxX();

    public: void setMaxX(Integer maxX);

    public: Integer getY();

    public: void setY(Integer y);

    public: Integer getSize();

    public: void setSize(Integer size);

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GAME_METEREDGAMEOBJECT_H
