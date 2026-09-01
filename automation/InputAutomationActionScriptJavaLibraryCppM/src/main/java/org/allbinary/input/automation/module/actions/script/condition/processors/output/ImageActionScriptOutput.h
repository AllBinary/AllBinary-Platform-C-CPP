
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

            #include "../../../../../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../../../../../java/lang/Long.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicProfileActionScriptOutput.h"
#include "ImageActionScriptOutputInterface.h"
#include "ImageTypes.h"
#include "ImageActionScriptOutputJPanel.h"
#include "ImageActionScriptOutputData.h"
#include "ImageActionScriptOutputProcessor.h"

class ImageActionScriptOutput: public BasicProfileActionScriptOutput, public ImageActionScriptOutputInterface {

    private: static const std::string NAME = "Captures";

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: bool saved = false;

    private: bool display = false;

    private: ImageTypes imageTypes;

    private: ImageActionScriptOutputJPanel actionScriptOutputJPanel;

public: ImageActionScriptOutput(Node node);

public: ImageActionScriptOutput();

    public: ImageActionScriptOutputJPanel getActionScriptOutputJPanel();

    public: HashMap<any, any> toHashMap();

                //@Throws(Exception.constructor)
            
    public: Node toXmlNode(Document document);

                //@Throws(Exception.constructor)
            
    public: void process(Long frame);

    public: void showDialog();

    public: bool isSaved();

    public: void setSaved(bool saved);

    public: bool isDisplay();

    public: void setDisplay(bool display);

    public: std::string future_toString();

    public: void log();

    public: ImageTypes getImageTypes();

    public: void setImageTypes(ImageTypes imageTypes);

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_ACTIONS_SCRIPT_CONDITION_PROCESSORS_OUTPUT_IMAGEACTIONSCRIPTOUTPUT_H
