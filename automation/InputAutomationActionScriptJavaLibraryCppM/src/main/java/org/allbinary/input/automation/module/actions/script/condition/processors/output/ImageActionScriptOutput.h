
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_ACTIONS_SCRIPT_CONDITION_PROCESSORS_OUTPUT_IMAGEACTIONSCRIPTOUTPUT_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_ACTIONS_SCRIPT_CONDITION_PROCESSORS_OUTPUT_IMAGEACTIONSCRIPTOUTPUT_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Long.h"
        
#include <java/util/HashMap.h>
class DomNodeHelper;
class DomSearchHelper;
class ModDomHelper;
class StdUtil;
class LogUtil;
class StringMaker;
class Document;
class Node;
class NodeList;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/module/actions/script/condition/processors/output/BasicProfileActionScriptOutput.h"
#include "org/allbinary/input/automation/module/actions/script/condition/processors/output/ImageActionScriptOutputInterface.h"
class ImageTypes;
class ImageActionScriptOutputJPanel;
class ImageActionScriptOutputData;
class ImageActionScriptOutputProcessor;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ImageActionScriptOutput: public BasicProfileActionScriptOutput, public ImageActionScriptOutputInterface {

    private: static inline const std::string NAME = "Captures";

    /*protected*/ public: LogUtil* logUtil;

    private: bool saved = false;

    private: bool display = false;

    private: ImageTypes* imageTypes;

    private: ImageActionScriptOutputJPanel* actionScriptOutputJPanel;

public: ImageActionScriptOutput(Node* node);

public: ImageActionScriptOutput();

    public: ImageActionScriptOutputJPanel* getActionScriptOutputJPanel();

    public: HashMap<Object*, Object*>* toHashMap();

                //@Throws(Exception.constructor)
            
    public: Node* toXmlNode(Document* document);

                //@Throws(Exception.constructor)
            
    public: void process(int64_t frame);

    public: void showDialog();

    public: bool isSaved();

    public: void setSaved(bool saved);

    public: bool isDisplay();

    public: void setDisplay(bool display);

    public: std::string future_toString();

    public: void log();

    public: ImageTypes* getImageTypes();

    public: void setImageTypes(ImageTypes* imageTypes);

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_ACTIONS_SCRIPT_CONDITION_PROCESSORS_OUTPUT_IMAGEACTIONSCRIPTOUTPUT_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_ACTIONS_SCRIPT_CONDITION_PROCESSORS_OUTPUT_IMAGEACTIONSCRIPTOUTPUT_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_ACTIONS_SCRIPT_CONDITION_PROCESSORS_OUTPUT_IMAGEACTIONSCRIPTOUTPUT_H_COMPLETE
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
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
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
#if __has_include("org/allbinary/input/automation/module/actions/script/condition/processors/output/BasicProfileActionScriptOutput.h")
#include "org/allbinary/input/automation/module/actions/script/condition/processors/output/BasicProfileActionScriptOutput.h"
#endif
#if __has_include("org/allbinary/input/automation/module/actions/script/condition/processors/output/ImageActionScriptOutputInterface.h")
#include "org/allbinary/input/automation/module/actions/script/condition/processors/output/ImageActionScriptOutputInterface.h"
#endif
#if __has_include("org/allbinary/input/automation/module/actions/script/condition/processors/output/ImageTypes.h")
#include "org/allbinary/input/automation/module/actions/script/condition/processors/output/ImageTypes.h"
#endif
#if __has_include("org/allbinary/input/automation/module/actions/script/condition/processors/output/ImageActionScriptOutputJPanel.h")
#include "org/allbinary/input/automation/module/actions/script/condition/processors/output/ImageActionScriptOutputJPanel.h"
#endif
#if __has_include("org/allbinary/input/automation/module/actions/script/condition/processors/output/ImageActionScriptOutputData.h")
#include "org/allbinary/input/automation/module/actions/script/condition/processors/output/ImageActionScriptOutputData.h"
#endif
#if __has_include("org/allbinary/input/automation/module/actions/script/condition/processors/output/ImageActionScriptOutputProcessor.h")
#include "org/allbinary/input/automation/module/actions/script/condition/processors/output/ImageActionScriptOutputProcessor.h"
#endif

        #endif
    
