
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

            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../java/lang/Integer.h"
        
            #include "../../../../../../java/lang/Double.h"
        
#include <java/awt/image/BufferedImage.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "MeteredGameObjectInterface.h"
#include "GraphicsAnalysisUtil.h"

class MeteredGameObject
            : public Object
        : public MeteredGameObjectInterface {
        

    private: ratios: std::vector<number>;

    private: good: bool = false;

    private: dropping: bool = false;

    private: minX: Integer;

    private: maxX: Integer;

    private: y: Integer;

    private: size: Integer;

    private: const RATIOS_LABEL: string = "Ratios: ";

    private: const IS_GOOD_LABEL: string = "isGood: ";

    private: const IS_DROPPPING_LABEL: string = "isDropping: ";

public constructor (std::vector<BufferedImage> bufferedImage, Integer minX, Integer maxX, Integer y);

    public bool isGood();

    setGood(bool good);

    public bool isDropping();

    setDropping(bool dropping);

    public std::vector<number> getRatios();

    public string toString();

    public setRatios(std::vector<number> ratios);

    public Integer getMinX();

    public setMinX(Integer minX);

    public Integer getMaxX();

    public setMaxX(Integer maxX);

    public Integer getY();

    public setY(Integer y);

    public Integer getSize();

    public setSize(Integer size);

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GAME_METEREDGAMEOBJECT_H
