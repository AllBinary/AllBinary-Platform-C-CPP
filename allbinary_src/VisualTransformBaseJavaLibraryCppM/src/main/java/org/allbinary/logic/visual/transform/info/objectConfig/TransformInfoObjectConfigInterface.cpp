
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/data/tree/dom/document/mapping/DomDocumentMappingInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class TransformInfoObjectConfigInterface: public DomDocumentMappingInterface {

    public: virtual bool containsView(TransformInfoInterface* transformInfoInterface) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual std::string getName() = 0;

                //@Throws(Exception.constructor)
            
    public: virtual BasicArrayList* getTransformsGroup(std::string group) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual BasicArrayList* getTransforms() = 0;

                //@Throws(Exception.constructor)
            
    public: virtual BasicArrayList* getParentTransforms() = 0;

                //@Throws(Exception.constructor)
            
    public: virtual BasicArrayList* getGroupTransforms() = 0;

                //@Throws(Exception.constructor)
            
    public: virtual std::string getOutputTypeName() = 0;

    public: virtual void setOutputTypeName(std::string value) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual std::string getInputOutputTypeName() = 0;

                //@Throws(Exception.constructor)
            
    public: virtual std::string getInputOutputTypeFile() = 0;

                //@Throws(Exception.constructor)
            
    public: virtual std::string getImportUriPath() = 0;

    public: virtual std::string toString() = 0;

};

            

