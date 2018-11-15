#pragma once

#include "../types.h"

#include "./pugixml/pugixml.hpp"

namespace carla {
namespace opendrive {
namespace parser {

  class ProfilesParser {
  private:

    void ParseElevation(
        const pugi::xml_node &xmlNode,
        std::vector<carla::opendrive::types::ElevationProfile> &out_elevation_profile);

    void ParseLateral(
        const pugi::xml_node &xmlNode,
        std::vector<carla::opendrive::types::LateralProfile> &out_lateral_profile);

  public:

    static void Parse(
        const pugi::xml_node &xmlNode,
        carla::opendrive::types::RoadProfiles &out_road_profiles);
  };

}
}
}