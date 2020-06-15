#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "MetaClusterPlugin.h"

void MetaClusterPlugin::input(std::string file) {
 inputfile = file;
}

void MetaClusterPlugin::run() {}

void MetaClusterPlugin::output(std::string file) {
 std::string outputfile = file;
 std::string myCommand = "";
myCommand += "metaCluster-3.0";
myCommand += " ";
myCommand += inputfile + " ";
 system(myCommand.c_str());
}

PluginProxy<MetaClusterPlugin> MetaClusterPluginProxy = PluginProxy<MetaClusterPlugin>("MetaCluster", PluginManager::getInstance());
