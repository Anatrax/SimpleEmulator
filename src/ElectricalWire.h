#ifndef ELECTRICALWIRE_H
#define ELECTRICALWIRE_H

struct ElectricalWire
{
    ElectricalWire(bool set_voltage)
    {
        has_voltage = set_voltage;
    }

    bool has_voltage;
};

#endif // ELECTRICALWIRE_H
