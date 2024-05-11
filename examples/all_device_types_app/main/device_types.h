#pragma once

namespace esp_matter {

enum device_type_enum {
    ESP_MATTER_ON_OFF_LIGHT = 1,
    ESP_MATTER_DIMMABLE_LIGHT,
    ESP_MATTER_COLOR_TEMP_LIGHT,
    ESP_MATTER_EXTENDED_COLOR_LIGHT,
    ESP_MATTER_ON_OFF_SWITCH,
    ESP_MATTER_DIMMER_SWITCH,
    ESP_MATTER_COLOR_DIMMER_SWITCH,
    ESP_MATTER_GENERIC_SWITCH,
    ESP_MATTER_ON_OFF_PLUGIN_UNIT,
    ESP_MATTER_DIMMABLE_PLUGIN_UNIT,
    ESP_MATTER_FAN,
    ESP_MATTER_THERMOSTAT,
    ESP_MATTER_AGGREGATOR,
    ESP_MATTER_BRIDGED_NODE,
    ESP_MATTER_DOOR_LOCK,
    ESP_MATTER_WINDOW_COVERING_DEVICE,
    ESP_MATTER_TEMP_SENSOR,
    ESP_MATTER_HUMIDITY_SENSOR,
    ESP_MATTER_OCCUPANCY_SENSOR,
    ESP_MATTER_CONTACT_SENSOR,
    ESP_MATTER_LIGHT_SENSOR,
    ESP_MATTER_PRESSURE_SENSOR,
    ESP_MATTER_FLOW_SENSOR,
    ESP_MATTER_PUMP,
    ESP_MATTER_MODE_SELECT_DEVICE,
    ESP_MATTER_RAC,
    ESP_MATTER_TEMP_CTRL_CABINET,
    ESP_MATTER_REFRIGERATOR,
    ESP_MATTER_AIR_PURIFIER,
    ESP_MATTER_AIR_QUALITY_SENSOR,
    ESP_MATTER_ROBOTIC_VACUUM_CLEANER,
    ESP_MATTER_LAUNDRY_WASHER,
    ESP_MATTER_DISH_WASHER,
    ESP_MATTER_SMOKE_CO_ALARM,
    ESP_MATTER_WATER_LEAK_DETECTOR,
    ESP_MATTER_WATER_FREEZE_DETECTOR,
    ESP_MATTER_POWER_SOURCE,
    ESP_MATTER_RAIN_SENSOR,
    ESP_MATTER_ELECTRICAL_SENSOR,
    ESP_MATTER_OVEN,
    ESP_MATTER_DEVICE_TYPE_MAX
};

struct device_type_name {
    const char *device_name;
    device_type_enum device_id;  
};

const device_type_name device_type_list[ESP_MATTER_DEVICE_TYPE_MAX] = { 
    {"on_off_light", ESP_MATTER_ON_OFF_LIGHT},
    {"dimmable_light", ESP_MATTER_DIMMABLE_LIGHT},
    {"color_temperature_light",ESP_MATTER_COLOR_TEMP_LIGHT},
    {"extended_color_light", ESP_MATTER_EXTENDED_COLOR_LIGHT},
    {"on_off_switch", ESP_MATTER_ON_OFF_SWITCH},
    {"dimmer_switch", ESP_MATTER_DIMMER_SWITCH},
    {"color_dimmer_switch", ESP_MATTER_COLOR_DIMMER_SWITCH},
    {"generic_switch", ESP_MATTER_GENERIC_SWITCH},
    {"on_off_plugin_unit", ESP_MATTER_ON_OFF_PLUGIN_UNIT},
    {"dimmable_plugin_unit", ESP_MATTER_DIMMABLE_PLUGIN_UNIT},
    {"fan", ESP_MATTER_FAN},
    {"thermostat", ESP_MATTER_THERMOSTAT},
    {"aggregator", ESP_MATTER_AGGREGATOR},
    {"bridged_node", ESP_MATTER_BRIDGED_NODE},
    {"door_lock", ESP_MATTER_DOOR_LOCK},
    {"window_covering_device", ESP_MATTER_WINDOW_COVERING_DEVICE},
    {"temperature_sensor", ESP_MATTER_TEMP_SENSOR},
    {"humidity_sensor", ESP_MATTER_HUMIDITY_SENSOR},
    {"occupancy_sensor", ESP_MATTER_OCCUPANCY_SENSOR},
    {"contact_sensor", ESP_MATTER_CONTACT_SENSOR},
    {"light_sensor", ESP_MATTER_LIGHT_SENSOR},
    {"pressure_sensor", ESP_MATTER_PRESSURE_SENSOR},
    {"flow_sensor", ESP_MATTER_FLOW_SENSOR},
    {"pump", ESP_MATTER_PUMP},
    {"mode_select_device", ESP_MATTER_MODE_SELECT_DEVICE},
    {"room_ac", ESP_MATTER_RAC},
    {"temp_ctrl_cabinet", ESP_MATTER_TEMP_CTRL_CABINET},
    {"refrigerator", ESP_MATTER_REFRIGERATOR},
    {"air_purifier", ESP_MATTER_AIR_PURIFIER},
    {"air_quality_sensor", ESP_MATTER_AIR_QUALITY_SENSOR},
    {"robotic_vacuum_cleaner", ESP_MATTER_ROBOTIC_VACUUM_CLEANER},
    {"laundry_washer", ESP_MATTER_LAUNDRY_WASHER},
    {"dish_washer", ESP_MATTER_DISH_WASHER},
    {"smoke_co_alarm", ESP_MATTER_SMOKE_CO_ALARM},
    {"water_leak_detector", ESP_MATTER_WATER_LEAK_DETECTOR},
    {"water_freeze_detector", ESP_MATTER_WATER_FREEZE_DETECTOR},
    {"power_source", ESP_MATTER_POWER_SOURCE},
    {"rain_sensor", ESP_MATTER_RAIN_SENSOR},
    {"electrical_sensor", ESP_MATTER_ELECTRICAL_SENSOR},
    {"oven", ESP_MATTER_OVEN}
};
} /* namespace esp_matter */
