/*
 * Copyright (C) 2017 Canonical, Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 3.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * Authored by: Alberto Aguirre <alberto.aguirre@canonical.com>
 *
 */

#ifndef MULTIPASS_HYPERV_VIRTUAL_MACHINE_FACTORY_H
#define MULTIPASS_HYPERV_VIRTUAL_MACHINE_FACTORY_H

#include <multipass/virtual_machine_factory.h>

namespace multipass
{
class HyperVVirtualMachineFactory final : public VirtualMachineFactory
{
public:
    VirtualMachine::UPtr create_virtual_machine(const VirtualMachineDescription& desc,
                                                VMStatusMonitor& monitor) override;

    FetchType fetch_type() override;
    VMImage prepare(const VMImage& source_image) override;
    void configure(YAML::Node& cloud_init_config) override;
};
}

#endif // MULTIPASS_HYPERV_VIRTUAL_MACHINE_FACTORY_H
