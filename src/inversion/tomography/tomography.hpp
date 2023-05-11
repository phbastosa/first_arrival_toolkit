# ifndef TOMOGRAPHY_HPP
# define TOMOGRAPHY_HPP

# include "../inversion.hpp"
# include "../../modeling/eikonal/eikonal.cuh"

class Tomography : public Inversion
{

public:
    void import_obs_data();
    void forward_modeling();
    void compute_residuals();
    void check_convergence();
    void optimization();
    void model_update();

    void set_parameters(std::string file);
};

# endif