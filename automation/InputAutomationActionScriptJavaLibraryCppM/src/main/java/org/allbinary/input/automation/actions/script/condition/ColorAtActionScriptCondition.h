
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_COLORATACTIONSCRIPTCONDITION_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_COLORATACTIONSCRIPTCONDITION_H

            #include "../../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../../java/lang/Integer.h"
        
            #include "../../../../../../../java/lang/Long.h"
        
#include <java/awt.h>

      
#include <java/awt/image/BufferedImage.h>

      
#include <java/util/HashMap.h>

      
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/graphics/color/ColorCacheFactory.h>

      
#include <org/allbinary/graphics/color/ColorCacheable.h>

      
#include <org/allbinary/input/media/image/capture/CapturedBufferedImagesCacheSingleton.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/util/cache/AutomaticCacheInterface.h>

      
#include <org/allbinary/media/image/analysis/ColorRange.h>

      
#include <org/allbinary/media/image/analysis/ColorRangeInterface.h>

      
#include <org/allbinary/media/image/cache/BufferedImageFrameCacheable.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicProfileActionScriptCondition.h"
#include "ColorAtActionScriptConditionInterface.h"
#include "ColorAtActionScriptConditionJPanel.h"
#include "Point.h"
#include "ColorAtActionScriptConditionData.h"
#include "Color.h"

class ColorAtActionScriptCondition: public BasicProfileActionScriptCondition, public ColorAtActionScriptConditionInterface {

    private: static const std::string NAME = "If Color At";

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: ColorAtActionScriptConditionJPanel colorAtActionScriptConditionJPanel;

    private: Point point;

    private: ColorRangeInterface colorRangeInterface = ColorRange() as ColorRangeInterface;

public: ColorAtActionScriptCondition(Node node);

public: ColorAtActionScriptCondition();

    private: void init();

    public: Point getPoint();

    public: void setPoint(Point point);

    public: void showDialog();

    public: HashMap<any, any> toHashMap();

                //@Throws(Exception.constructor)
            
    public: Node toXmlNode(Document document);

                //@Throws(Exception.constructor)
            
    public: bool shouldProcess(int64_t frame);

    public: void log();

    public: ColorRangeInterface getColorRangeInterface();

    public: void setColorRangeInterface(ColorRangeInterface colorRangeInterface);

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_COLORATACTIONSCRIPTCONDITION_H
