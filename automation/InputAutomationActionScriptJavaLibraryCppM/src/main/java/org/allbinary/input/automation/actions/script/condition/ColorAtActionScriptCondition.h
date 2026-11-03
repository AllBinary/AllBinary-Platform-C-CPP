
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
            #include "java/lang/Long.h"
        
#include <java/awt/Color.h>
#include <java/awt/Point.h>
#include <java/awt/image/BufferedImage.h>
#include <java/util/HashMap.h>
class DomNodeHelper;
class DomSearchHelper;
class ModDomHelper;
class ColorCacheFactory;
class ColorCacheable;
class CapturedBufferedImagesCacheSingleton;
class StdUtil;
class LogUtil;
class StringMaker;
class AutomaticCacheInterface;
class ColorRange;
class ColorRangeInterface;
class BufferedImageFrameCacheable;
class CommonSeps;
class Document;
class Node;
class NodeList;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/actions/script/condition/BasicProfileActionScriptCondition.h"
#include "org/allbinary/input/automation/actions/script/condition/ColorAtActionScriptConditionInterface.h"
class ColorAtActionScriptConditionJPanel;
class ColorAtActionScriptConditionData;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ColorAtActionScriptCondition: public BasicProfileActionScriptCondition, public virtual ColorAtActionScriptConditionInterface {

    private: static inline const std::string NAME = "If Color At";

    /*protected*/ public: LogUtil* logUtil;

    private: ColorAtActionScriptConditionJPanel* colorAtActionScriptConditionJPanel;

    private: Point* point;

    private: ColorRangeInterface* colorRangeInterface;

public: ColorAtActionScriptCondition(Node* node);

public: ColorAtActionScriptCondition();

    private: void init();

    public: Point* getPoint();

    public: void setPoint(Point* point);

    public: void showDialog();

    public: HashMap<Object*, Object*>* toHashMap();

                //@Throws(Exception.constructor)
            
    public: Node* toXmlNode(Document* document);

                //@Throws(Exception.constructor)
            
    public: bool shouldProcess(int64_t frame);

    public: void log();

    public: ColorRangeInterface* getColorRangeInterface();

    public: void setColorRangeInterface(ColorRangeInterface* colorRangeInterface);

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_COLORATACTIONSCRIPTCONDITION_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_COLORATACTIONSCRIPTCONDITION_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_COLORATACTIONSCRIPTCONDITION_H_COMPLETE
        #if __has_include(<java/awt/Color.h>)
#include <java/awt/Color.h>
#endif
#if __has_include(<java/awt/Point.h>)
#include <java/awt/Point.h>
#endif
#if __has_include(<java/awt/image/BufferedImage.h>)
#include <java/awt/image/BufferedImage.h>
#endif
#if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/DomNodeHelper.h>)
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/DomSearchHelper.h>)
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/ModDomHelper.h>)
#include <org/allbinary/data/tree/dom/ModDomHelper.h>
#endif
#if __has_include(<org/allbinary/graphics/color/ColorCacheFactory.h>)
#include <org/allbinary/graphics/color/ColorCacheFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/color/ColorCacheable.h>)
#include <org/allbinary/graphics/color/ColorCacheable.h>
#endif
#if __has_include(<org/allbinary/input/media/image/capture/CapturedBufferedImagesCacheSingleton.h>)
#include <org/allbinary/input/media/image/capture/CapturedBufferedImagesCacheSingleton.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/util/cache/AutomaticCacheInterface.h>)
#include <org/allbinary/logic/util/cache/AutomaticCacheInterface.h>
#endif
#if __has_include(<org/allbinary/media/image/analysis/ColorRange.h>)
#include <org/allbinary/media/image/analysis/ColorRange.h>
#endif
#if __has_include(<org/allbinary/media/image/analysis/ColorRangeInterface.h>)
#include <org/allbinary/media/image/analysis/ColorRangeInterface.h>
#endif
#if __has_include(<org/allbinary/media/image/cache/BufferedImageFrameCacheable.h>)
#include <org/allbinary/media/image/cache/BufferedImageFrameCacheable.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include(<org/w3c/dom/Document.h>)
#include <org/w3c/dom/Document.h>
#endif
#if __has_include(<org/w3c/dom/Node.h>)
#include <org/w3c/dom/Node.h>
#endif
#if __has_include(<org/w3c/dom/NodeList.h>)
#include <org/w3c/dom/NodeList.h>
#endif
#if __has_include("org/allbinary/input/automation/actions/script/condition/BasicProfileActionScriptCondition.h")
#include "org/allbinary/input/automation/actions/script/condition/BasicProfileActionScriptCondition.h"
#endif
#if __has_include("org/allbinary/input/automation/actions/script/condition/ColorAtActionScriptConditionInterface.h")
#include "org/allbinary/input/automation/actions/script/condition/ColorAtActionScriptConditionInterface.h"
#endif
#if __has_include("org/allbinary/input/automation/actions/script/condition/ColorAtActionScriptConditionJPanel.h")
#include "org/allbinary/input/automation/actions/script/condition/ColorAtActionScriptConditionJPanel.h"
#endif
#if __has_include("org/allbinary/input/automation/actions/script/condition/ColorAtActionScriptConditionData.h")
#include "org/allbinary/input/automation/actions/script/condition/ColorAtActionScriptConditionData.h"
#endif

        #endif
    
